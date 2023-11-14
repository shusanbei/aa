#include <Arduino.h>
#include <U8g2lib.h>
#include <BluetoothSerial.h>

#ifdef U8X8_HAVE_HW_SPI
#include <SPI.h>
#endif
#ifdef U8X8_HAVE_HW_I2C
#include <Wire.h>
#endif
#include <DHTStable.h>

#if !defined(CONFIG_BT_ENABLED) || !defined(CONFIG_BLUEDROID_ENABLED)
#error Bluetooth is not enabled! Please run `make menuconfig` to and enable it
#endif
BluetoothSerial SerialBT;

#include <WiFi.h>

// WIFI
const char *ssid = "xin";
const char *password = "12345678910";

WiFiServer server(80);

String header;

String output26State = "off";
String output27State = "off";
String output28State = "off";
String output29State = "off";
String output30State = "off";

int WIFIstate = -1; // 是否使用WIFI模式

// 步进电机
const int motor1_PWM = 19; // 把调用的GPIO引脚进行了一个宏定义
const int motor2_PWM = 18;
int freq = 5000;
int motorChannel1 = 0;
int motorChannel2 = 1;
int resolution = 10;

int Speed = 800;

int wheelstate = -1; // 轮子状态标志

// 温度传感器
U8G2_SSD1306_128X64_NONAME_1_HW_I2C u8g2(U8G2_R0, /* reset=*/U8X8_PIN_NONE); // SCL:22 SDA:21

DHTStable DHT;
const int DHT11_PIN = 14; // 传感器的信号管脚

// 距离传感器
const int TrigPin = 27;
const int EchoPin = 26;
long duration;  // 持续时间
float distance; // 测量距离

// 蜂鸣器引脚
const int buzzer = 13;

// 摇杆
const int RSx = 32;
const int RSy = 35;
const int SW = 34;

void u8g2_prepare(void)
{
  u8g2.setFont(u8g2_font_6x10_tf);
  u8g2.setFontRefHeightExtendedText();
  u8g2.setDrawColor(1);
  u8g2.setFontPosTop();
  u8g2.setFontDirection(0);
}

void u8g2_extra_page1(uint8_t a)
{
  u8g2.drawStr(0, 0, "T and Humidity");
  u8g2.setFont(u8g2_font_unifont_t_symbols);
  u8g2.setFontPosTop();
  u8g2.drawUTF8(0, 24, "☀ ☁");
  switch (a)
  {
  case 0:
  case 1:
  case 2:
  case 3:
    u8g2.drawUTF8(a * 3, 36, "☂");
    break;
  case 4:
  case 5:
  case 6:
  case 7:
    u8g2.drawUTF8(a * 3, 36, "☔");
    break;
  }
  u8g2.setFont(u8g2_font_unifont_t_chinese2); // use chinese2

  u8g2.setFontDirection(0);
  u8g2.setCursor(35, 15);
  u8g2.println("湿度:");
  u8g2.print(DHT.getHumidity(), 1);
  u8g2.println("%");
  u8g2.setCursor(35, 32);
  u8g2.println("温度:");
  u8g2.print(DHT.getTemperature(), 1);
  u8g2.println("°C");
}

void u8g2_extra_page2()
{
  u8g2.drawStr(0, 0, "distance");

  u8g2.setFont(u8g2_font_unifont_t_chinese2); // use chinese2

  u8g2.setFontDirection(0);
  if (distance <= 20)
  {
    u8g2.setCursor(0, 15);
    u8g2.println("前方有物体");
  }
  u8g2.setCursor(0, 32);
  u8g2.println("距离:");
  u8g2.print(distance);
  u8g2.print("cm");
  u8g2.setCursor(0, 55);
}

uint8_t draw_state = 0;

void draw(void)
{
  u8g2_prepare();
  switch (draw_state >> 3)
  {
  case 0:
    u8g2_extra_page2();
    break;
  case 1:
    u8g2_extra_page1(draw_state & 7);
    break;
  }
}

void setup()
{
  Serial.begin(115200);

  u8g2.begin();
  u8g2.enableUTF8Print(); // enable UTF8 support for the Arduino print() function
  Serial.begin(115200);
  Serial.println(__FILE__);
  Serial.print("LIBRARY VERSION: ");
  Serial.println(DHTSTABLE_LIB_VERSION);
  Serial.println();
  Serial.println("类型：Type,\t状态：status,\t湿度：Humidity (%),\t温度：Temperature (C)");

  pinMode(TrigPin, OUTPUT);
  pinMode(EchoPin, INPUT);

  pinMode(buzzer, OUTPUT);
  digitalWrite(buzzer, HIGH); // 预先关闭蜂鸣器，以免上电后蜂鸣器发出声音

  analogSetWidth(resolution);
  pinMode(SW, INPUT_PULLUP);

  SerialBT.begin("shusanbei666"); // 蓝牙设备名称（可以起一个特别一点的名称，方便辨认）
  ledcSetup(motorChannel1, freq, resolution);
  ledcAttachPin(motor1_PWM, motorChannel1);
  ledcSetup(motorChannel2, freq, resolution);
  ledcAttachPin(motor2_PWM, motorChannel2);

  // Connect to Wi-Fi network with SSID and password
  Serial.print("Connecting to ");
  Serial.println(ssid);
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED)
  {
    delay(500);
    Serial.print(".");
  }
  // Print local IP address and start web server
  Serial.println("");
  Serial.println("WiFi connected.");
  Serial.println("IP address: ");
  Serial.println(WiFi.localIP());
  server.begin();
}

void loop()
{
  wendu();

  juli();

  yaogan();

  u8g2.firstPage();
  do
  {
    draw();
  } while (u8g2.nextPage());

  draw_state++;
  if (draw_state >= 2 * 8)
    draw_state = 0;

  if (SerialBT.available() || Serial.available())
  {
    int wheel = -1;
    if (Serial.available())
      wheel = Serial.read();
    else if (Serial.available())
      wheel = SerialBT.read();
    Serial.println(wheel);
    switch (wheel)
    {
    case 'A':
      wheelstate = 1;
      Serial.println(wheelstate);
      Serial.println("up!");
      Serial.print("speed-->");
      Serial.println(Speed);
      SerialBT.println("up!");
      SerialBT.print("speed-->");
      SerialBT.println(Speed);
      break;
    case 'B':
      wheelstate = 2;
      Serial.println(wheelstate);
      Serial.println("down!");
      Serial.print("speed-->");
      Serial.println(Speed);
      SerialBT.println("down!");
      SerialBT.print("speed-->");
      SerialBT.println(Speed);
      break;
    case 'C':
      wheelstate = 3;
      Serial.println(wheelstate);
      Serial.println("stop!");
      SerialBT.println("stop!");
      break;
    case 'D':
      Speed += 10;
      if (Speed >= 1024)
        Speed = 1024;
      Serial.println(wheelstate);
      Serial.println("speedup!");
      Serial.print("speed-->");
      Serial.println(Speed);
      SerialBT.println("speedup!");
      SerialBT.print("speed-->");
      SerialBT.println(Speed);
      break;
    case 'E':
      Speed -= 10;
      if (Speed <= 500)
        Speed = 500;
      Serial.println(wheelstate);
      Serial.println("speeddown!");
      Serial.print("speed-->");
      Serial.println(Speed);
      SerialBT.println("speeddown!");
      SerialBT.print("speed-->");
      SerialBT.println(Speed);
      break;
    }
  }

  if(WIFIstate == 1){
    wifi();  
  }
  
  if (wheelstate == 1 || output26State == "off")
  {
    up();
  }
  else if (wheelstate == 2)
  {
    down();
  }
  else if (wheelstate == 3)
  {
    stop();
  }
  Serial.print("wheelstate-->");
  Serial.println(wheelstate);
}

void up()
{
  ledcWrite(motorChannel2, Speed); // 正转
  ledcWrite(motorChannel1, 0);
}

void down()
{
  ledcWrite(motorChannel2, 0); // 反转
  ledcWrite(motorChannel1, Speed);
}

void stop()
{
  ledcWrite(motorChannel2, 0); // 停止
  ledcWrite(motorChannel1, 0);
}

void yaogan()
{
  int x = analogRead(RSx);
  int y = analogRead(RSy);
  int z = digitalRead(SW);
  Serial.print(x);
  Serial.print(",");
  Serial.print(y);
  Serial.print(",");
  Serial.println(z);

  if (x > 550)
  {
    wheelstate = 1;
  }
  if (x < 400)
  {
    wheelstate = 2;
  }

  delay(200);
}

void buzzer01()
{
  for (int i = 0; i < 6; i++)
  {
    delay(100);
    digitalWrite(buzzer, LOW);
    delay(100);
    digitalWrite(buzzer, HIGH);
  }
  digitalWrite(buzzer, HIGH);
}

void wendu()
{
  // READ DATA
  delay(2000);
  Serial.print("类型：DHT11, \t");
  int chk = DHT.read11(DHT11_PIN);

  Serial.print("状态：");
  switch (chk)
  {
  case DHTLIB_OK:
    Serial.print("OK");
    break;
  case DHTLIB_ERROR_CHECKSUM:
    Serial.print("Checksum error");
    break;
  case DHTLIB_ERROR_TIMEOUT:
    Serial.print("Time out error");
    break;
  default:
    Serial.print("Unknown error");
    break;
  }
  // DISPLAY DATA
  Serial.print(",\t\t湿度：");
  Serial.print(DHT.getHumidity(), 1); // 控制1位小数显示
  Serial.print(",\t\t温度：");
  Serial.println(DHT.getTemperature(), 1);

  // 温度或者湿度过高都会触发蜂鸣器警报
  if (DHT.getTemperature() >= 40 || DHT.getHumidity() >= 70)
  {
    buzzer01();
    //    Serial.printf("蜂鸣器响了\n");
  }
}

void juli()
{
  delay(200);
  digitalWrite(TrigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(TrigPin, HIGH);
  delayMicroseconds(20);

  digitalWrite(TrigPin, LOW);

  duration = pulseIn(EchoPin, HIGH);
  distance = duration * 0.034 / 2; // 测试距离(厘米)=(高电平时间*声速(340M/S))/2

  Serial.printf("当前距离是:%.2f cm\n", distance);

  // 距离小于20 电机换向
  if (distance <= 20)
  {
    if (wheelstate == 1)
    {
      wheelstate = 2;
    }
    else if (wheelstate == 2)
    {
      wheelstate = 1;
    }
    Serial.printf("换向了\n");
  }
}

void wifi()
{
  WiFiClient client = server.available(); // Listen for incoming clients

  if (client)
  {                                // If a new client connects,
    Serial.println("New Client."); // print a message out in the serial port
    String currentLine = "";       // make a String to hold incoming data from the client
    while (client.connected())
    { // loop while the client's connected
      if (client.available())
      {                         // if there's bytes to read from the client,
        char c = client.read(); // read a byte, then
        Serial.write(c);        // print it out the serial monitor
        header += c;
        if (c == '\n')
        { // if the byte is a newline character
          // if the current line is blank, you got two newline characters in a row.
          // that's the end of the client HTTP request, so send a response:
          if (currentLine.length() == 0)
          {
            // HTTP headers always start with a response code (e.g. HTTP/1.1 200 OK)
            // and a content-type so the client knows what's coming, then a blank line:
            client.println("HTTP/1.1 200 OK");
            client.println("Content-type:text/html");
            client.println("Connection: close");
            client.println();

            // turns the GPIOs on and off
            if (header.indexOf("GET /26/on") >= 0)
            {
              Serial.println("GPIO 26 on");
              output26State = "on";
            }
            else if (header.indexOf("GET /26/off") >= 0)
            {
              Serial.println("GPIO 26 off");
              output26State = "off";
            }
            else if (header.indexOf("GET /27/on") >= 0)
            {
              Serial.println("GPIO 27 on");
              output27State = "on";
            }
            else if (header.indexOf("GET /27/off") >= 0)
            {
              Serial.println("GPIO 27 off");
              output27State = "off";
            }
            else if (header.indexOf("GET /28/on") >= 0)
            {
              Serial.println("GPIO 28 on");
              output28State = "on";
            }
            else if (header.indexOf("GET /28/off") >= 0)
            {
              Serial.println("GPIO 28 off");
              output28State = "off";
            }
            else if (header.indexOf("GET /29/on") >= 0)
            {
              Serial.println("GPIO 29 on");
              output29State = "on";
            }
            else if (header.indexOf("GET /29/off") >= 0)
            {
              Serial.println("GPIO 29 off");
              output29State = "off";
            }
            else if (header.indexOf("GET /30/on") >= 0)
            {
              Serial.println("GPIO 30 on");
              output30State = "on";
            }
            else if (header.indexOf("GET /30/off") >= 0)
            {
              Serial.println("GPIO 30 off");
              output30State = "off";
            }

            // Display the HTML web page
            client.println("<!DOCTYPE html><html>");
            client.println("<head><meta name=\"viewport\" content=\"width=device-width, initial-scale=1\">");
            client.println("<link rel=\"icon\" href=\"data:,\">");
            // CSS to style the on/off buttons
            // Feel free to change the background-color and font-size attributes to fit your preferences
            client.println("<style>html { font-family: Helvetica; display: inline-block; margin: 0px auto; text-align: center;}");
            client.println(".button { background-color: #4CAF50; border: none; color: white; padding: 16px 40px;");
            client.println("text-decoration: none; font-size: 30px; margin: 2px; cursor: pointer;}");
            client.println(".button2 {background-color: #555555;}</style></head>");

            // Web Page Heading
            client.println("<body><h1>ESP32 Web Server</h1>");

            // Display current state, and ON/OFF buttons for GPIO 26
            client.println("<p>GPIO 26 - State " + output26State + "</p>");
            // If the output26State is off, it displays the ON button
            if (output26State == "off")
            {
              client.println("<p><a href=\"/26/on\"><button class=\"button\">ON</button></a></p>");
            }
            else
            {
              client.println("<p><a href=\"/26/off\"><button class=\"button button2\">OFF</button></a></p>");
            }

            // Display current state, and ON/OFF buttons for GPIO 27
            client.println("<p>GPIO 27 - State " + output27State + "</p>");
            // If the output27State is off, it displays the ON button
            if (output27State == "off")
            {
              client.println("<p><a href=\"/27/on\"><button class=\"button\">ON</button></a></p>");
            }
            else
            {
              client.println("<p><a href=\"/27/off\"><button class=\"button button2\">OFF</button></a></p>");
            }

            // Display current state, and ON/OFF buttons for GPIO 28
            client.println("<p>GPIO 28 - State " + output28State + "</p>");
            // If the output28State is off, it displays the ON button
            if (output28State == "off")
            {
              client.println("<p><a href=\"/28/on\"><button class=\"button\">ON</button></a></p>");
            }
            else
            {
              client.println("<p><a href=\"/28/off\"><button class=\"button button2\">OFF</button></a></p>");
            }

            // Display current state, and ON/OFF buttons for GPIO 29
            client.println("<p>GPIO 29 - State " + output29State + "</p>");
            // If the output29State is off, it displays the ON button
            if (output29State == "off")
            {
              client.println("<p><a href=\"/29/on\"><button class=\"button\">ON</button></a></p>");
            }
            else
            {
              client.println("<p><a href=\"/29/off\"><button class=\"button button2\">OFF</button></a></p>");
            }

            // Display current state, and ON/OFF buttons for GPIO 30
            client.println("<p>GPIO 30 - State " + output28State + "</p>");
            // If the output30State is off, it displays the ON button
            if (output30State == "off")
            {
              client.println("<p><a href=\"/30/on\"><button class=\"button\">ON</button></a></p>");
            }
            else
            {
              client.println("<p><a href=\"/30/off\"><button class=\"button button2\">OFF</button></a></p>");
            }

            client.println("</body></html>");

            // The HTTP response ends with another blank line
            client.println();
            // Break out of the while loop
            break;
          }
          else
          { // if you got a newline, then clear currentLine
            currentLine = "";
          }
        }
        else if (c != '\r')
        {                   // if you got anything else but a carriage return character,
          currentLine += c; // add it to the end of the currentLine
        }
      }
    }
    // Clear the header variable
    header = "";
    // Close the connection
    client.stop();
    Serial.println("Client disconnected.");
    Serial.println("");
  }
}