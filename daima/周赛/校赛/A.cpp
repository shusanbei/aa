#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s;
    int a,b,d;
    scanf("%d",&s);
    scanf("%d %d %d",&a,&b,&d);
    int x=a,y=b,t=1;
    while(s>0)
    {
        if(t%a==0&&t%b==0)
        {
            t++;
        }
        else if(t%a!=0&&t%b==0)
        {
            s = s-d;
            t++;
        }
        else t++;
    }
    printf("%d",t-1);
    return 0;
}