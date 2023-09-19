#include<stdio.h>
int main()
{
    char arr[10];
    scanf("%s",arr);
    int ans=0;
    for(int i=0;i<8;i++)
    {
        if(arr[i]=='1') ans++;
    }
    printf("%d",ans);
    return 0;
}