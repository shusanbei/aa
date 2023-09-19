#include<stdio.h>
#include<math.h>
int main()
{
	int n, flag=0;
	scanf("%d", &n);
	int a[n][3];
	for(int i=0; i<n; i++)
    {     //一个循环，输入三次，降低复杂度 
		scanf("%d", &a[i][0]);
		scanf("%d", &a[i][1]);
		scanf("%d", &a[i][2]);
	}
	
	for(int i=0; i<n; i++)
    {  //拿第 i 名同学与其他比 
		for(int j=i+1; j<n; j++)
		{
			int x = fabs( a[i][0] - a[j][0] );  //语文 ,fabs是求绝对值
			int y = fabs( a[i][1] - a[j][1] );  //数学 
			int z = fabs( a[i][2] - a[j][2] );  //英语 
			int s = fabs( (a[i][0]+a[i][1]+a[i][2]) - (a[j][0]+a[j][1]+a[j][2]) );   //总分差
			if(x <= 5 && y <= 5 && z <= 5 && s <= 10)
            {
				flag =flag+1;
			}
		} 
	} 
	
	printf("%d", flag);
	
	return 0;
}