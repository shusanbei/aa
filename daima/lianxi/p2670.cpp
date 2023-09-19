#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    char arr;
    int ar[105][105]={0};
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=b;j++)
        {
            cin>>arr;
            if(arr=='*')ar[i][j]=1;
            else if(arr=='?')ar[i][j]=0;
        }
    }
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=b;j++)
        {
            if(ar[i][j]==1)printf("*");
            if(ar[i][j]==0)
            {
                printf("%d",ar[i-1][j-1]+ar[i-1][j]+ar[i-1][j+1]+ar[i][j-1]+ar[i][j+1]+ar[i+1][j-1]+ar[i+1][j]+ar[i+1][j+1]);
            }
        }
        if(i<a)printf("\n");
    }
    return 0;
}