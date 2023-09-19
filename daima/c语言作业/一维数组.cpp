#include<stdio.h>
int main()
{
    int arr[11];
    for(int i=1;i<=10;i++)
    {
        scanf("%d",&arr[i]);
    }
    int x,ans=0;
    scanf("%d",&x);
    for(int i=1;i<=10;i++)
    {
        if(x==arr[i])
        {
            ans=i;
        }
    }
    if(ans!=0)printf("%d",ans);
    else printf("该数组中不存在x");
    return 0;
}


#include<stdio.h>
int main()
{
    int arr[7];
    for(int i=0;i<6;i++)
    {
        scanf("%d",&arr[i]);
    }
    int sum=0,ave,max=arr[0];
    for(int i=0;i<6;i++)
    {
        sum += arr[i];
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    ave=sum/6;
    printf("%d %d %d",sum,ave,max);
    return 0;
}


#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    scanf("%s",str);
    for(int i=strlen(str);i>=0;i--)
    {
        printf("%c",str[i]);
    }
    return 0;
}