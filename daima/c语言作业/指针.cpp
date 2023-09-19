// #include<stdio.h>
// int main()
// {
//     float a,b;
//     float *x=&a,*y=&b;
//     scanf("%f %f",x,y);
//     float *p;
//     p=x;
//     x=y;
//     y=p;
//     printf("%f %f",*x,*y);
//     return 0;
// }


























#include<stdio.h>
int main()
{
	int a[4],i,*p=a;

	for(i=0;i<4;i++)
	 scanf("%d",&a[i]);

    // for(i=0;i<4;i++)
	//  scanf("%d",p+i);

    // for(i=0;i<4;i++)
	//  scanf("%d",p++);

	for(i=0;i<4;i++)
	 printf("%d ",a[i]);
printf("\n");
    for(i=0;i<4;i++)
	 printf("%d ",*(p+i));
printf("\n");
    for(i=0;i<4;i++)
	 printf("%d ",*(p++));
    return 0;
}
