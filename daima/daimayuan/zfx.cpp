#include<bits/stdc++.h>
using namespace std;
char a[110][110];
int n;
int main()
{
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(min(min(i,j),min(n-i+1,n-j+1))%2==0){a[i][j]='.';}
            else {a[i][j]='+';}
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            printf("%c",a[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}