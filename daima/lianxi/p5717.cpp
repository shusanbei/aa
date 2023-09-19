#include<stdio.h>
int main()
{
    int a[5];
    int min=1e9,mid,max=0;
    int t;
    for(int i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<2;i++)
    {
        for(int j=i+1;j<3;j++)
        {
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    min=a[0];
    mid=a[1];
    max=a[2];
    if(min+mid>max&&min+max>mid&&mid+max>min)
    {
        if(min*min+mid*mid>max*max)
        {
            printf("Acute triangle\n");
        }
        if(min*min+mid*mid<max*max)
        {
            printf("Obtuse triangle\n");
        }
        if(min*min+mid*mid==max*max)
        {
            printf("Right triangle\n");
        }
        if(min==mid||min==max||mid==max)
        {
            printf("Isosceles triangle\n");
        }
        if(min==mid&&mid==max)
        {
            printf("Equilateral triangle\n");
        }
    }    
    else
    {
        printf("Not triangle\n");
    }
    return 0;
}