#include<bits/stdc++.h>
using namespace std;
void getfail(char *p,int *f)  //求字符串p的前缀表，存在f数组中
{
    int m=strlen(p);
    f[0]=0;                   //第一位补为0
    f[1]=0;                   //正式的字符串的第一位的前缀
    for(int i=1;i<m;i++)      //求前缀
    {
        int j=f[i];
        while(j&&p[i]!=p[j]) j=f[j];   
        f[i+1]=p[i]==p[j]?j+1:0;
    }
}
void find(char *t,char *p,int *f)
{
    int n=strlen(t),m=strlen(p);
    getfail(p,f);
    int j=0;
    for(int i=0;i<n;i++)
    {
        while(j && p[j] != t[i]) j=f[j];  //跳到字符串当前后缀的位置进行匹配
        if(p[j]==t[i]) j++;               //匹配到了继续往后匹配，看后面的是否也匹配
        if(j==m) printf("%d\n",i-m+1 +1); //匹配的长度等于了 p 的长度即为 p 在t上匹配到了
    }                                     //然后就输出当前的 p 的第一个的位置
}
char s1[1000009],s2[10000009];
int ans[1000009],tem;
int main()
{
    scanf("%s %s",s1,s2);
    find(s1,s2,ans);
    int tem=strlen(s2);
    getfail(s2,ans);
    for(int i=1;i<=tem;i++)
    {
        printf("%d ",ans[i]);  //输出前缀表为ans
    }
    return 0;
}