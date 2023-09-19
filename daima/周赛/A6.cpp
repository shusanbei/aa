#include<stdio.h>
int gcd(int x,int y)
{
	int t;
	if (x==0||y==0)return 0;
	while (y!= 0)
    {
		t = x%y;
		x = y;
		y = t;
	}
	return x;                 
}           
int main()
{
    int T;
    int a,b,c,d;
    int fenzi,fenmu;
    int j,k;
    scanf("%d",&T);
    while (T--)
    {
        scanf("%d %d %d %d",&a,&b,&c,&d);
        fenzi=a*d+b*c;
        fenmu=b*d;
        j=fenzi/gcd(fenzi,fenmu);
        k=fenmu/gcd(fenzi,fenmu);
        printf("%d %d\n",j,k);
    }
    return 0;
}