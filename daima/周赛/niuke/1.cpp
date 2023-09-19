#include<bits/stdc++.h>
using namespace std;
int x[100009];
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    for(int i=0;i<n;i++)
    {
        int tem=x[i]/1024;
        if(tem%2==1)
        {
            x[i]=x[i]%1024;
            x[i]=-1024+x[i];
            printf("%d ",x[i]);
        }
        else
        {
            x[i]=x[i]%1024;
            printf("%d ",x[i]);
        }
    }
    return 0;
}