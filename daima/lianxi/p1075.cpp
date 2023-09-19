#include<stdio.h>
int main()
{
    long n;
    scanf("%ld",&n);
    long p;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            p=n/i;
            break;
        }
    }
    printf("%ld",p);
    return 0;
}