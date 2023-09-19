#include<bits/stdc++.h>
using namespace std;
char s1[2020],s2[2020];
int tem,ans[2020];

void chengfa(char x[],char y[],int z[])
{
    int a[2020]={0},b[2020]={0};
    int la,lb,lc;

    la=strlen(x);
    lb=strlen(y);

    for(int i=0;i<la;i++)
    {
        a[la-i]=x[i]-'0';
    }    
    for(int i=0;i<lb;i++)
    {
        b[lb-i]=y[i]-'0';
    }
    lc=la+lb;
    for(int i=1;i<=la;i++)
    {
        for(int j=1;j<=lb;j++)
        {
            z[i+j-1] += a[i]*b[j];  
            z[i+j] +=z[i+j-1]/10;
            z[i+j-1]=z[i+j-1]%10;
        }
    }
    for(int i=1;i<=lc;i++)        //可能出现100*0的情况需要循环去前面的0
    {                             //否则会出现100*0=000
        if(z[lc]==0 && lc>0) lc--;
        if(lc==1) break;
    }
    tem=lc;
}
int main()
{
    scanf("%s",s1);
    scanf("%s",s2);
    chengfa(s1,s2,ans);
    for(int i=tem;i>0;i--)
    {
        printf("%d",ans[i]);
    }
}