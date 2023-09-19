#include<bits/stdc++.h>
using namespace std;
int square(int i)
{
    return i*i;
}
int main()
{
    int i=0;
    i=square(i);
    for(;i<3;i++)
    {
        static int i=1;//因为有static定义静态变量for内i的值
        i+=square(i);  //没有受到for（）括号内的影响
        printf("%d ",i);
    }
    printf("%d\n",i);
    return 0;
}