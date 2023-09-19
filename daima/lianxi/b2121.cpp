#include<stdio.h>
#include<string.h>
int main()
{
    char a[22222];
    char x[22222],y[22222];
    gets(a);
    int ans,min,max;
    for(int i=0;i <=strlen(a);i++)
    {
        if(a[i]==' '&&a[i]==','&&a[i]=='.')
        {
            if(ans>max)
            {
                for(i=0;i<ans;i++)
                {
                    x[i]=a[i];
                    max=ans;
                }
            }
            if(ans<min)
            {
                for(i=0;i<ans;i++)
                {
                    y[i]=a[i];
                    min=ans;
                }
            }
            ans=0;
        }
    else a[ans++] = a[i];        
    }
    for(int i = 0; i < max; i++) printf("%c", x[i]);
    printf("\n");
    for(int i = 0; i < min; i++) printf("%c", y[i]);
    return 0;
}

#include <stdio.h>
#include <string.h>
int main()
{
    char c, s[110];
    char a[110], b[110];
    int p = 0, lena = 0, lenb = 110;
    while(c = getchar()){
        if(c == EOF || c == '\n') break;
        if(c == ',' || c == '.' || c == ' '){
            if(p > lena){
                for(int i = 0; i < p; i++) a[i] = s[i];
                lena = p;
            }
            if(p < lenb){
                for(int i = 0; i < p; i++) b[i] = s[i];
                lenb = p;
            }
            p = 0;
        }
        else s[p++] = c;
    }
    for(int i = 0; i < lena; i++) printf("%c", a[i]);
    printf("\n");
    for(int i = 0; i < lenb; i++) printf("%c", b[i]);
    return 0;
}
