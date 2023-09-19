#include <stdio.h>
#include <string.h>
int main()
{
    char a[99999],b[99999];
    int  x[99999],y[99999],z[99999];
    int len;
    memset(x,0,sizeof(x));
    memset(y,0,sizeof(y));
    memset(z,0,sizeof(z));
    scanf("%s%s",a,b);
    int l1=strlen(a);
    int l2=strlen(b);
    if(l1>l2)
    len=l1;
    else
    len=l2;
    for(int i=l1-1;i>=0;i--)
    x[l1-i-1]=a[i]-'0';
    for(int i=l2-1;i>=0;i--)
    y[l2-i-1]=b[i]-'0';
    for(int k=0;k<len;k++)
    {
    	z[k]+=x[k]+y[k];
        z[k+1]+=z[k]/10; 
    	z[k]=z[k]%10;
	}
	if(z[len]!=0)
	len++;
	while(z[len-1]==0&&len>1)
	len--;
	for(int i=len-1;i>=0;i--)
	{
        printf("%d",z[i]);
    }
    return 0;
 }