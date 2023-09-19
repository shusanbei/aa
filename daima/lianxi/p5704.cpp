#include<stdio.h>
int main()
{
    char zhimu;
    scanf("%c",&zhimu);
    printf("%c",char (int (zhimu)-32));
    return 0;
}