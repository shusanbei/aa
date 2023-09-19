#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int ans1=a/b,ans2=a/b+1;  //向上取整
    printf("%d %d",ans1,ans2);
}