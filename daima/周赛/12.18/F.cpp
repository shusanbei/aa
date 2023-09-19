#include<bits/stdc++.h>
using namespace std;
int ans[100]={0};
int n;
long long a[100009],tem1,tem2,tem=0;
int er(long long n)
{
    if(n<2)                      
        return n; 
    else
    { 
        return er(n/2)*10+n%2;
    } 
}
int jws(int A)
{
    for(int i=1;;i++)
    {
        if(A/10==0)
        {
            return i;
            break;
        }
        A=A/10;
    }
}
void bijiao(int n)
{
    int n1=er(n);
    int x=0;
    for(int i=0;i<jws(n1);i++)
    {
        ans[x]=n1%10;
        n1=n1/10;
        x++;
    }
}
int main()
{
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        bijiao(a[i]);
        for(int j=0;j<jws(a[i]);j++)
        {
            if(ans[j]==1)
            {
                tem1++;
            }
            if(ans[j]==0)
            {
                tem2++;
            }
        }
        if(tem1>tem2) a[i]=1;
        else a[i]=-1;
    }
    for(int i=0;i<n;i++)
    {
        tem+=a[i];
    }
    for(int i=0;i<n;i++)
    {
        printf("%lld\n",a[i]);
    }
    return 0;
}