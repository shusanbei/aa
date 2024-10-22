#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;
char str[10];
int index_a = 0;
void E();			//E->TG;
void X();			//G->+TG | e
void T();			//T->FS
void Y();			//S->*FS | e
void F();			//F->(E) | i
int main()
{
    int len;
    cin >> str;
    len = strlen(str);
    str[len + 1] = '\0';
    E();
    cout << str;
    cout << "为合法符号串" << endl;
    index_a = 0;
    return 0;
}
/*构造递归关系及子程序*/
void E()//E->TG;
{
    T();
    X();
}

void X() //G->+TG | e
{
    if (str[index_a] == '+'||str[index_a] == '-')
    {
        index_a++;
        T();
        X();
    }
    else if(str[index_a] == '#'){
        cout << str;
        cout << "为合法符号串" << endl;
        exit(0);
    }
}
void T() //T->FS
{
    F();
    Y();

}
void Y()//S->*FS | e
{
    if(str[index_a]=='*'){
        index_a++;
        F();
        Y();
    }
    else if(str[index_a] == '#'){
        cout << str;
        cout << "为合法符号串" << endl;
        exit(0);
    }
}
void F() //F->(E) | i
{
    if (str[index_a] == '(') {
        index_a++;
        E();
        if (str[index_a] == ')') {
            index_a++;
        } else {
            cout << "非法的符号串!";
            exit(0); //程序退出
        }
    } else if (str[index_a] == 'i') {
        index_a++;
    }
    else {
        cout << "非法的符号串!";
        exit(0);
    }
}