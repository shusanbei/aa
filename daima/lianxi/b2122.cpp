#include<stdio.h>
#include<string.h>
int main()
{
    char a[110];
    while(~scanf("%s",a))
    {
        for(int i=strlen(a)-1;i>=0;i--)//要-1因为最后一位是'\0'
        {
            printf("%c",a[i]);
        }
        printf("\n");
    }
    return 0;
}