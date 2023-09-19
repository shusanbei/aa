#include<stdio.h>
int n;
int a[10010]={0};
int hs(int i)
{
	if(i==n-1)
		return 1;
	if(a[i]+1==a[i+1])
		return hs(i+1)+1;
	else
		return 1;
}
int max(int x,int y)
{
    if(x<=y)
    {
        x=y;
    }
    return x;
}
int main()
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int maxn=0;
	for(int i=0;i<n;i++)
	{
		maxn=max(maxn,hs(i));
	}
	printf("%d",maxn);
}