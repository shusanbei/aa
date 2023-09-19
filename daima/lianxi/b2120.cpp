#include<stdio.h>
#include<string.h>
int main()
{
    char a[1100];
    int ans=0;
    gets(a);
    for(int i=0; i <=int (strlen(a));i++)
    {
        if(a[i]==' ')
        {
            if(ans!=0){printf("%d,",ans);}
            ans=0;
        }
        else
        {
            ans++;
            if(a[i]=='\0'){printf("%d",ans-1);}
        }
    }
    return 0;
}