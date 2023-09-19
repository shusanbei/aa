#include<stdio.h>
int main()
{
    char s[100];
    gets(s);
    int ans=0;
    int i=0;
    for (i = 0;s[i]!='\0'; i++)
    {
        if(s[i]!=' '&&s[i]!='\n')
        {
            ans++;
        }
    }
    printf("%d",ans);
    return 0;
}