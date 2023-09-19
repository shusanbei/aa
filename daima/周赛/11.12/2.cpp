#include<stdio.h>
#include<string.h>
int main()
{
	char s[1100],t[1100];
	int i;
	scanf("%s",s);
	scanf("%s",t);
    for(i=strlen(s)-1;i>=0;i--)
	{	
        printf("%-c",s[i]);
    }
    for(i=strlen(t)-1;i>=0;i--)
	{	
        printf("%-c",t[i]);
    }
    return 0;
}

