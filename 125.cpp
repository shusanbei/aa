#include<iostream>
#include<cstring>
#include<set>
#include<fstream>
#include<map>
#include<iomanip>
#include<vector>
#include<stack>
using namespace std;

string PATH;//文法输入文件
char S;//开始符
set<char> VN, VT;//非终结符，终结符
map<char, vector<vector<string>>> MAP;//产生式表
map<char, set<char>> firstSet;//单个字符的FIRST集
map<string, set<char>> firstSetS;//符号串FIRST集
map<char, set<char>> followSet;//FOLLOW集合
map<char, vector<string>> expressionSet;//表达式集合
vector<vector<string>> table;//预测分析表本体
FILE* fin;
vector<string> filebuffer;//文件读取的缓冲区
vector<string> expression_withoutrecursion;//消左递归
vector<string> expression_withoutback;//消完左递归和回溯
vector<string> inputExpression;//最后增广完成，用于进行分析的文法
stack<char> analyzeStack;//分析栈
string action = "";
string strInput;//输入待分析的字符串
int index = 0;

void read() {
    //文法写在文件中
    cout << "输入待分析文法路径：" << endl;
    cin >> PATH;
    ifstream fin(PATH);
    string str;
    if (!fin.is_open()){
        cout << "打开文件失败" << endl;
        return;
    }
    while (fin >> str) 
        filebuffer.push_back(str);
    for (string st : filebuffer)
        cout << st << endl;
}
//识别标识符与非标识符
void identifyVnVt() {
    S = filebuffer[0][0];
    for (string str : filebuffer){
        //产生式左部，必定是非终结符
        VN.insert(str[0]);
    }
    for (string str : filebuffer) 
        for (int i = 1; i < str.size(); i++) 
            //识别到了终结符
            if (str[i] != '-' && str[i] != '>' && str[i] != '|' && VN.count(str[i]) == 0) 
                VT.insert(str[i]);
    cout << "文法开始符号：" << S << endl;
    cout << "文法非终结符：";
    for (auto ch : VN)
        cout << ch << " ";
    cout << endl;
    cout << "文法终结符：";
    for (auto ch : VT)
        cout << ch << " ";
}
void identifyVnVt2(){
    for (string str : inputExpression){	
        //识别新插入的终结符
        VN.insert(str[0]);
    }
    for (string str : inputExpression){
        //识别新插入的非终结符
        //空字用e表示
        //文法结束符用#表示
        for (int i = 1; i < str.size(); i++){
            if (str[i] != '-' && str[i] != '>' && str[i] != '|' && VN.count(str[i]) == 0) 
                VT.insert(str[i]);
        }
    }
    cout << "文法开始符号：" << S << endl;
    cout << "文法非终结符：";
    for (auto ch : VN)
        cout << ch << " ";
    cout << endl;
    cout << "文法终结符：";
    for (auto ch : VT)
        cout << ch << " ";
    cout << endl;
}
//消除左递归
void leftRecursion(){
    for (string str : filebuffer){
        if (str[0] == str[str.find('>') + 1]){
            char newch = 'A';
            for (newch = 'A'; newch <= 'Z'; newch++){
                if (VN.count(newch) == 0)
                    break;
            }
            VN.insert(newch);
            string newstr = "";
            string alpha = str.substr(4, str.find('|') - 4);
            //A->betaA'
            newstr = newstr + str[0] + (string)"->" + str.substr(str.find('|') + 1) + newch;
            expression_withoutrecursion.push_back(newstr);
            newstr = "";
            //A'->alphaA'|e
            newstr = newstr + newch + "->" + alpha + newch + "|" + 'e';
            //e表示空字符episilon
            VT.insert('e');
            expression_withoutrecursion.push_back(newstr);
        }
        else
            expression_withoutrecursion.push_back(str);
    }
    cout << "\n消除左递归：\n";
    for (string str : expression_withoutrecursion)
        cout << str << endl;
}
//消除回溯
void leftTraceback(){
    for (string str : expression_withoutrecursion){
        //发现回溯
        if (str[3] == str[str.find("|") + 1]){
            char newch = 'A';
            for (newch = 'A'; newch <= 'Z'; newch++){
                if (VN.count(newch) == 0)
                    break;
            }
            VN.insert(newch);
            string delta = "" + str[3];
            string newstr = "";
            //A->alphaA'
            newstr += str[0] + "->" + delta + newch;
            expression_withoutback.push_back(newstr);
            newstr = "";
            //A'->beta1|beta2
            string beta1 = str.substr(4, str.find('|') - 4);
            string beta2 = str.substr(str.find('|') + 1);
            newstr += newch + "->" + beta1 + '|' + beta2;
            expression_withoutback.push_back(newstr);
        }
        else
            expression_withoutback.push_back(str);
    }
    cout << "\n消除回溯：\n";
    for (string str : expression_withoutback)
        cout << str << endl;
}
//增广，删除竖线|
void deleteor(){
    for (string str : expression_withoutback){
        if (str.find('|') != string::npos){
            //将A->beta1|beta2拆成A->beta1和A->beta2
            string right1 = str.substr(3, str.find('|') - 3);
            string newstr1 = "";
            newstr1 = str[0] + (string)"->" + right1;
            inputExpression.push_back(newstr1);
            string right2 = str.substr(str.find('|') + 1);
            string newstr2 = "";
            newstr2 += str[0] + (string)"->" + right2;
            inputExpression.push_back(newstr2);
        }
        else
            inputExpression.push_back(str);
    }
    cout << "\n增广\n";
    for (string str : inputExpression)
        cout << str << endl;
}
//字符的求first集
void getFirst(char c){
    //已经求完了当前字符的first集
    if (firstSet.count(c))
        return;
    set<char> newset;
    //若c为终结符，则first为自己，结束
    if (VT.count(c)){
        newset.insert(c);
        firstSet[c] = newset;
        return;
    }
    for (string s : expressionSet[c]){
        //若存在X->e，将e加入
        if ('e' == c)
            newset.insert('e');
        else{
            for (char cur : s){
                if (!firstSet.count(cur))
                    getFirst(cur);
                set<char> curFirst = firstSet[cur];
                for (auto curf : curFirst)
                    newset.insert(curf);
                //将Y的first集合中的元素中不是e的加入
                if (!curFirst.count('e'))
                    break;
                //如果加到了e，则循环回去，即X->Y1Y2..Yk时，Y1产生e，就需要加入Y2的first集合
            }
        }
    }
    firstSet[c] = newset;
}
//多个字符（字符串、短语）first集求法
void getFirst(string s){
    if (firstSetS.count(s))
        return;
    set<char> newset;
    int i = 0;
    while (i < s.length()){
        char cur = s[i];
        if (!firstSet.count(cur))
            getFirst(cur);
        //将当前字符的first集作为短语的first集
        set<char> rightSet = firstSet[cur];
        for (auto rs : rightSet)
            newset.insert(rs);
        //类似的，如果加到了e，则循环回去，即X->Y1Y2..Yk时，Y1产生e，就需要加入Y2的first集合
        if (rightSet.count('e'))
            i++;
        else
            break;
        //遍历完了当前语句后，将空字加入当前语句first集
        if (i == s.length())
            newset.insert('e');
    }
    firstSetS[s] = newset;
}
//某个字符的follow集合
void getFollow(char c){
    vector<string> list = expressionSet[c];
    set<char> leftFollowSet;
    if (followSet.count(c))
        leftFollowSet = followSet[c];
    //对文法开始符号，将#加入follow集合
    if (c == S)
        leftFollowSet.insert('#');
    for (char ch : VN) {
        for (string s : expressionSet[ch]) {
            for (int i = 0; i < s.length(); i++) {
                //若有A->aBb（a可为空），则将b加入B的follow集合
                if (c == s[i] && i + 1 < s.length() && VT.count(s[i + 1])) 
                    leftFollowSet.insert(s[i + 1]);
            }
        }
    }
    followSet[c] = leftFollowSet;
    for (string s : list){
        int i = s.length() - 1;
        //对每个产生式从右往左遍历
        while (i >= 0){
            char cur = s[i];
            //对于当前标识符B
            //对于当前标识符之后的字符，若是非终结符，则将这个非终结符的first集加入当前字符的follow集
            if (VN.count(cur)){
                string right = s.substr(i + 1);
                set<char> rightFirstSet;
                if (!followSet.count(cur)) 
                    getFollow(cur);
                set<char> curFollowSet = followSet[cur];
                //若A->aB或A->aB\beta且\beta->e
                //则把follow(A)加到follow(B)
                if (right.length() == 0)
                    for (auto lfs : leftFollowSet) 
                        curFollowSet.insert(lfs);
                else{
                    //将若A->Bbeta，将B后的字符的first（除e）加入
                    if (right.length() == 1){
                        if (!firstSet.count(right[0])) 
                            getFirst(right[0]);
                        rightFirstSet = firstSet[right[0]];
                    }
                    else{
                        if (!firstSetS.count(right))
                            getFirst(right);
                        rightFirstSet = firstSetS[right];
                    }
                    for (char var : rightFirstSet)
                        if (var != 'e')
                            curFollowSet.insert(var);
                    //若A->Bbeta且e属于first（beta），将follow（A）加入follow（B)
                    if (rightFirstSet.count('e'))
                        for (auto lfs : leftFollowSet)
                            curFollowSet.insert(lfs);
                }
                followSet[cur] = curFollowSet;
            }
            i--;
        }
    }
}
//初始化
void init(){
    for (string e : inputExpression){
        string str = e.substr(e.find('>') + 1);
        char c = e[0];
        vector<string> list;
        if (expressionSet.count(c))
            list = expressionSet[c];
        list.push_back(str);
        expressionSet[c] = list;
    }
    //分理出每个产生时左部和右部
    for (auto node : expressionSet){
        cout << node.first << " ";
        for (auto nd : node.second)
            cout << nd << " ";
        cout << endl;
    }
    //求每个产生式first集合
    for (char c : VN)
        getFirst(c);
    cout << "\nFirst集合:\n";
    for (auto node : firstSet){
        cout << node.first << ":";
        for (auto nd : node.second) 
            cout << nd << " ";
        cout << endl;
    }
    //求文法开始符的follow
    getFollow(S);
    //求每个非终结符的follow
    for (char c : VN)
        getFollow(c);
    cout << "\nFollow集合:\n";
    for (auto node : followSet){
        cout << node.first << ":";
        for (auto nd : node.second)
            cout << nd << " ";
        cout << endl;
    }
}
void insert(char X, char a, string s){
    if (a == 'e')
        a = '#';
    for (int i = 0; i < VN.size() + 1; i++){
        if (table[i][0][0] == X) {
            for (int j = 0; j < VT.size() + 1; j++){
                if (table[0][j][0] == a){
                    table[i][j] = s;
                    return;
                }
            }
        }
    }
}
//构造分析表
void createTable(){
    vector<char> VtArray;
    vector<char> VnArray;
    for (char node : VT)
        if (node != 'e')
            VtArray.push_back(node);
    VtArray.push_back('e');
    for (char node : VN)
        VnArray.push_back(node);
    table.resize(VnArray.size() + 1);
    for (int i = 0; i < VnArray.size() + 1; i++)
        table[i].resize(VtArray.size() + 1);
    for (int i = 0; i < VtArray.size(); i++){		
        //e终结符视作#
        if (VtArray[i] == 'e')
            table[0][i + 1] = "#";
        else
            table[0][i + 1] = VtArray[i];
    }
    for (int i = 0; i < VnArray.size(); i++) 
        table[i + 1][0] = VnArray[i];
    for (char A : VN){
        for (string s : expressionSet[A]){
            if (!firstSetS.count(s))
                getFirst(s);
            set<char> newset = firstSetS[s];
            for (char a : newset){
                string news = "";
                news += A;
                news += "->";
                news += s;
                insert(A, a, news);
            }
            //对于终结符a属于first（A）,把A->a加入到M[A,a]中
            //若e属于first（A），则将Follow（A）的终结符加入
            if (newset.count('e')){
                set<char> setFollow = followSet[A];
                string news = "";
                news += A;
                news += "->e";
                if (setFollow.count('#'))
                    insert(A, '#', news);
                for (char b : setFollow)
                    insert(A, b, news);
            }
        }
    }
    for (int i = 0; i < VN.size() + 1; i++){
        for (int j = 0; j < VT.size() + 1; j++)
            cout << setw(10) << table[i][j];
        cout << endl;
    }

}
//输出分析表
void displayLL(){
    stack<char> stk = analyzeStack;
    string s = "";
    while (!stk.empty()){
        s += stk.top();
        stk.pop();
    }
    cout << setw(20) << s << setw(10) << strInput.substr(index) << setw(20) << action << endl;
}
//在分析表中找到非终结符X和a对应的表项
string find(char X, char a){
    for (int i = 0; i < VN.size() + 1; i++){
        if (table[i][0][0] == X){
            for (int j = 0; j < VT.size() + 1; j++){
                if (table[0][j][0] == a) {
                    if (table[i][j] == "")
                        return "";
                    else
                        return table[i][j].substr(3);
                }
            }
        }
    }
    return "";
}
//LL分析过程
void analyzeLL(){
    cout << "\nLL分析过程\n";
    cout << setw(20) << "stack" << setw(10) << "input" << setw(20) << "expression";
    cout << endl;
    analyzeStack.push('#');
    //#入栈
    analyzeStack.push(S);
    //开始符入栈
    displayLL();
    char X = analyzeStack.top();
    while (X != '#'){
        char a = strInput[index];
        if (X == a){
            action = "";
            analyzeStack.pop();
            index++;
        }
        else if (VT.count(X))
            return;//找到终结符，出栈
        else if (find(X, a) == "")
            return;
        else if (find(X, a) == "e"){
            analyzeStack.pop();
            action = "";
            action += X;
            action += "->e";
        }//空字，出栈
        else{//其余情况，需要按分析表对栈顶元素进行推导
            string str = find(X, a);
            if (str != ""){
                action = "";
                action += X;
                action += "->";
                action += str;
                analyzeStack.pop();
                int len = str.length();
                for (int i = len - 1; i >= 0; i--)
                    analyzeStack.push(str[i]);//栈顶元素出栈，按分析表和下一字符将分析表中元素入栈
            }
            else{
                cout << "\nERROR!\n";//出错，直接返回
                return;
            }
        }
        X = analyzeStack.top();
        displayLL();
    }
}

int main(){
    //从文件读取文法
    read();
    //识别非终结符与终结符
    identifyVnVt();
    //消除左递归
    leftRecursion();
    //消除回溯
    leftTraceback();
    //增广
    deleteor();
    cout << "\n再次识别终结符与非终结符\n";
    //再次识别非终结符与终结符
    identifyVnVt2();
    //求first与follow，初始化
    init();
    //建立分析表
    createTable();
    cout << "\n请输入待分析的语句\n";
    cin >> strInput;
    strInput += "#";
    cout << strInput << endl;
    analyzeLL();
    return 0;
}
