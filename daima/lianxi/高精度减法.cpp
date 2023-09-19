#include<bits/stdc++.h>
using namespace std;
char s1[10090],s2[10090],s3[10090];
int a[10090],b[10090],c[10090];
int flag=0;
bool compare(char s1[],char s2[])
{
    int u=strlen(s1),v=strlen(s2);
    if(u!=v) return u>v;
    for(int i=0;i<u;i++)
    {
        if(s1[i]!=s2[i]) return s1[i]>s2[i];
    }
    return 1;
}
void jianfa()