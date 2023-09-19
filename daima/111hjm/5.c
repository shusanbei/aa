#include<stdio.h>
#include<string.h>
int main()
{
    int a[21]={12,0,63,8,13,101,123,15,77,65,68,156,15,28,31,62,56,60,22,23};
    int len=21;
    for (int i =0;i<len-1;i++)
    {
        for (int j=0;j<len-1-i;j++)
        {
            if (a[j]>a[j+1]) 
            {
                int tem=a[j];
                a[j]=a[j+1];
                a[j+1]=tem;
            }
        }
    }
    for(int i=0;i<len;i++) printf("%d ",a[i]);
    
    int x,ans=1;
    scanf("%d",&x);
    for(int i=0;i<len;i++)
    {
        if(x==a[i])
        {
            printf("%d",i);
            ans=0;
            break;
        }
    }
    if(ans) printf("没有找到x");

    int n,ss=1;
    scanf("%d",&n);
    for(int i=0;i<len;i++)
    {
        if(i==n)
        {
            ss=0;
		    a[len++-1]=a[20];
		    for(int k=len;k>n;k--)
            {
		        a[k] =a[k-1];
	        }
            int m;
            scanf("%d",&m);
            a[i]=m;
        }
    }
    if(ss) printf("不存在下标为%d的数",n);
    else for(int i=0;i<len;i++) printf("%d ",a[i]);

    int cut,sss=1;
    scanf("%d",&cut);
    for(int i=0;i<len;i++)
    {
        if(a[i]==cut)
        {
            sss=0;
            len--;
		    for(int k=i;k<len;k++)
            {
		        a[k] =a[k+1];
	        }
        }
    }
    if(sss) printf("数组中没有%d",cut);
    else for(int i=0;i<len;i++) printf("%d ",a[i]);
    return 0;
}