#include<stdio.h>
int main()
{
	int N,i,k,ans=0,m;
	scanf("%d", &N);
	for (k = 0; k < N * N;)
	{
		scanf("%d", &m);
		for (i = 0; i < m; i++)
		{
			printf("%d", ans);
			k++;
			if (k % N == 0)
				printf("\n");
		}
		if (ans==0)
			ans=1;
		else
			ans=0;
	}
	return 0;
}
