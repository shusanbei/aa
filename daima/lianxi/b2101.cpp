#include<stdio.h>
int main()
{
	int m,n,t,ans=0; scanf("%d%d",&m,&n);
	for(int i=1;i<=m;i++)
		for(int j=1;j<=n;j++)
        {
			scanf("%d",&t);
			if((i==1||i==m)||(j==1||j==n))
				ans+=t;
		}
	printf("%d",ans);
	return 0;
}