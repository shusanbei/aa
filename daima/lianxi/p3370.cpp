#include<bits/stdc++.h>
using namespace std;
unsigned long long haxi(char a[])
{
    unsigned long long tem=0;
    for(int i=0;i<int(strlen(a));i++)
    {
        tem=tem*26+a[i]-'a';
    }
    return tem;
}
int main()
{
    char arr[10000];
    int ha[10000],n,ans=1;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%s",arr);
        ha[i]=haxi(arr);
    }
    sort(ha,ha+n);
    for(int j=1;j<n;j++)
    {
        if(ha[j]!=ha[j-1])
        {
            ans++;
        }
    }
    printf("%d",ans);
    return 0;
}