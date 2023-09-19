#include<stdio.h>
#include<string.h>
int main()
{
    char a[20];
    char b[1100000];
    int g=0;
    scanf("%s",a);
    gets(b);
    int la=strlen(a),lb=strlen(b);
    for(int i=0; i<la; i++) 
    {
        if(a[i]>='a'&&a[i]<='z')
        {
            a[i]-=32;
        }    
    }
    for(int i=0; i<lb; i++) 
    {
        if(b[i]>='a'&&b[i]<='z')
        {
            b[i]-=32;
        }    
    }
    for(int i=0;b[i]!='\0';i++)
    {
        if(b[i]==' ')
        {
            g=1;
        }
        for()
    }
    return 0;
}