#include<stdio.h>
int main(){
	int a[80]={57,27,7,68,75,14,56,5,34,62,64,51,75,30,17,11,73,20,32,48,49,60,63,16,64,39,36,67,10,23,74,39,87,33,76,44,63,70,23,85,90,64,81,11,51,65,59,66,38,64,79,41,90,14,11,9,63,43,16,77,11,10,98,69,96,34,43,72,55,17,30,94,35,89,71,6,27,46,4,64};
	int ans=0,x=0;
	for (int i=0;i<80;i++)
	{
		ans+=a[i];
	}
	ans=ans/80; 
	for (int i=0;i<80;i++)
	{
		if(a[i]>ans)
		{
			x++;
		}
	}
	printf("%d %d",ans,x);
	return 0;
} 