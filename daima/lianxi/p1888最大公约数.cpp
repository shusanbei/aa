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
	return x;                 //反复循环while内直到t=0即y=0得出的x就是最大公约数
}                             //gcd为求最大公因数的函数，x为最小公约数。
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a<b&&b<c){printf("%d/%d",a/gcd(a,c),c/gcd(a,c));}
    if(a<c&&c<b){printf("%d/%d",a/gcd(a,b),b/gcd(a,b));}
    if(b<a&&a<c){printf("%d/%d",b/gcd(b,c),c/gcd(b,c));}
    if(b<c&&c<a){printf("%d/%d",b/gcd(b,a),a/gcd(b,a));}
    if(c<a&&a<b){printf("%d/%d",c/gcd(c,b),b/gcd(c,b));}
    if(c<b&&b<a){printf("%d/%d",c/gcd(c,a),a/gcd(c,a));}
    return 0;
}