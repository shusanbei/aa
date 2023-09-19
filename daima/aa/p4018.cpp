#include<bits/stdc++.h>
using namespace std;
int sz(int x)
{
    if(x%6==0)   //12345都是能一次取到的，而6不行
    {            //如果石子有6个 前人取1-5个 那么后人一定可以取完
        return 0;
    }
    else return 1;
}
int n[50000009];
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%d",&n[i]);
    }
    for(int i=0;i<t;i++)
    {
        if(sz(n[i])==1)
        {
            printf("October wins!\n");
        }
        else 
        {
            printf("Roy wins!\n");
        }
    }
    return 0;
}