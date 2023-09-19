#include<stdio.h>
int main()
{
    char arr[15];
    scanf("%s",arr);
    int m,n;
    m=(arr[0]-48)*1+(arr[2]-48)*2+(arr[3]-48)*3+(arr[4]-48)*4+(arr[6]-48)*5+(arr[7]-48)*6+(arr[8]-48)*7+(arr[9]-48)*8+(arr[10]-48)*9;
    n=m%11;
    if(n==arr[12]-48)
    {
        printf("Right\n");
    }
    if(n!=arr[12]-48&&n!=10)
    {
        arr[12]=n+48;
        printf("%s\n",arr);
    }
    if(n==10)
    {
        if(arr[12]=='X')
        {
            printf("Right");
        }
        else
        {
            arr[12]='X';
            printf("%s\n",arr);
        }
    }
    return 0;
}