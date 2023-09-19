#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],b[n];
    int x=0,y=0,max=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int j=0;j<n;j++)
    {
        if(a[j]<a[j+1])
        {
            x+=1;
        }
        else if(a[j]>=a[j+1])
        {
            b[y]=x;
            y+=1;
            x=1;
        }
    }
    for(int k=0;k<y;k++)
    {
        if(max<b[k])
        {
            max=b[k];
        }
    }
    printf("%d\n",max);
    return 0;
}
