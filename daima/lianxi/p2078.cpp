#include<stdio.h>
int main()
{
    char a[100];
    scanf("%s", a);
    int i=0;
    int k;
    scanf("%d",&k);
    int ans=0;
    while(a[i]!='\0')
    {
        if(a[i]=='3'){ans++;}
        i++;
    }
    if(ans==k)printf("YES");
    else printf("NO");
    return 0;
}                               //字符串

#include<stdio.h>
int main()
{
    long long a,k;
    scanf("%lld %lld",&a,&k);
    int ans=0;
    while(a>0)
    {
        if(a%10==3)
        {
            ans++;
        }
            a=a/10;            
    }
    if(ans==k)printf("YES");
    else printf("NO");
    return 0;
}                             //数字