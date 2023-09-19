#include <stdio.h>
int main()
{
	int S; 
	int V;
	scanf("%d %d",&S,&V);
	int t;
	if(S%V==0) 
	{
		t=S/V;
		t+=9; 
	}
	else
	{
		t=S/V;
		t+=10; 
	}
	int H;
	int M;
	H=7;
	M=59;
	while(t!=0) 
	{
		if(M!=0)
		{
			M--;
		}
		else
		{
			if(H!=0)
			{
				H--;
				M=59;
			}
			else
			{
				H=23;
				M=59;
			}
		}
		t--;
	}
	int h1,h2;
	int m1,m2;
	h1=H/10;
	h2=H-(10*(H/10)); 
	m1=M/10;
	m2=M-(10*(M/10)); 
	printf("%d%d:%d%d",h1,h2,m1,m2);
}