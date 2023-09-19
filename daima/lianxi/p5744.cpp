#include<stdio.h>
struct STU
{
    char name[100];
    int age;
    int NOIP;
};

int main()
{
    int n;
    scanf("%d",&n);
    struct STU arr[10000];
    for(int i=0;i<n;i++)
    {
        scanf("%s %d %d",arr[i].name,&arr[i].age,&arr[i].NOIP);
        arr[i].age=arr[i].age+1;
        arr[i].NOIP=arr[i].NOIP*1.2;
        if(arr[i].NOIP>=600)
        {
            arr[i].NOIP=600;
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%s %d %d\n",arr[i].name,arr[i].age,arr[i].NOIP);
    }    
    return 0;
}