#include <bits/stdc++.h>
using namespace std;

int isDigit();//判断是不是字母 
int isAlpha();//判断关键字 
int isKey();
void scan(int &attr, int &i, char s[],int &n); //语法分析程序
char iskey[9][50] = {"main", "if", "else", "break", "while", "do", "case", "return","void"};
char token[50];

//主函数 
int main()
{
    char s[100];
    printf("请输入字符串（以 空格+# 结尾）\n"); 
    int flag=0;
    while (scanf("%s", s))
    {
    	if(strcmp(s, "#") == 0)
    	break;
        int i = 0;
        int n=1;
        int attr;     
        if(flag==0)
        {
        	printf("输入的词法分析(种别码，单词属性)输出如下：\n");
        	flag=1;
		}
        while (i < strlen(s))
        {
            scan(attr, i, s,n);
            if(n==1)
            printf("（%d,%s）\n", attr, token);
        }
    }
    return 0;
}
int isAlpha(char ch)//判断是不是字母 
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        return 1;
    else
        return 0;
}
int isKey(char s[])//判断关键字 
{
    for (int i = 0; i < 9; i++)
    {
        if (strcmp(s, iskey[i]) == 0)
        {
            return i + 1;
        }
    }
    return -1;
}
int isDigit(char ch)//判断是不是数字 
{
    if (ch >= '0' && ch <= '9')
        return 1;
    else
        return 0;
}
void scan(int &attr, int &i, char s[],int &n)//核心子程序（语法分析程序） 
{
    int temp = 0;
    if (s[i] == ' ')
        i++;
    if (isAlpha(s[i]))//开头是字母作为标识符 
    {
        while (isDigit(s[i]) || isAlpha(s[i]))
        {
            token[temp++] = s[i];
            i++;
        }
        token[temp] = '\0';
        attr = isKey(token);
        if (attr == -1)
        {
            attr = 10;
        }
    }
    else if (isDigit(s[i]))//开头是数字
    {
        while (isDigit(s[i]))
        {
            token[temp++] = s[i];
            i++;
        }
        token[temp] = '\0';
        attr = 11;
    }
    else//如果是运算符或者界符
    {
        switch (s[i])
        {
        // +-*/运算符 13-16
        case '+':
            attr = 13;
            token[0] = s[i];
            token[1] = '\0';
            break;
        case '-':
            attr = 14;
            token[0] = s[i];
            token[1] = '\0';
            break;
        case '*':
            attr = 15;
            token[0] = s[i];
            token[1] = '\0';
            break;
        case '/':
            attr = 16;
            token[0] = s[i];
            token[1] = '\0';
            break;
        //;:,{}[]()#运算符 23-31
        case ';':
            attr = 23;
            token[0] = s[i];
            token[1] = '\0';
            break;
        case ':':
            attr = 24;
            token[0] = s[i];
            token[1] = '\0';
            break;
        case ',':
            attr = 25;
            token[0] = s[i];
            token[1] = '\0';
            break;
        case '{':
            attr = 26;
            token[0] = s[i];
            token[1] = '\0';
            break;
        case '}':
            attr = 27;
            token[0] = s[i];
            token[1] = '\0';
            break;
        case '[':
            attr = 28;
            token[0] = s[i];
            token[1] = '\0';
            break;
        case ']':
            attr = 29;
            token[0] = s[i];
            token[1] = '\0';
            break;
        case '(':
            attr = 30;
            token[0] = s[i];
            token[1] = '\0';
            break;
        case ')':
            attr = 31;
            token[0] = s[i];
            token[1] = '\0';
            break;
        case '#':
            attr = 0;
            token[0] = s[i];
            token[1] = '\0';
            break;
        }
        //< <= > >= == !=
        if (s[i] == '<')
        {
            token[temp++] = s[i];
            if (s[i + 1] == '=')
            {
                i++;
                token[temp++] = s[i];
                attr = 18;
            }
            else
            {
                attr = 17;
            }
            token[temp] = '\0';
        }
        if (s[i] == '>')
        {
            token[temp++] = s[i];
            if (s[i + 1] == '=')
            {
                i++;
                token[temp++] = s[i];
                attr = 20;
            }
            else
            {
                attr = 19;
            }
            token[temp] = '\0';
        }
        if (s[i] == '=')
        {
            token[temp++] = s[i];
            if (s[i + 1] == '=')
            {
                i++;
                token[temp++] = s[i];
                attr = 21;
            }
            else
            {
                attr = 12;
            }
            token[temp] = '\0';
        }
        if (s[i] == '!')
        {
            token[temp++] = s[i];
            if (s[i + 1] == '=')
            {
                i++;
                token[temp++] = s[i];
                attr = 22;
            }
            token[temp] = '\0';
        }
        i++;
    }
}


