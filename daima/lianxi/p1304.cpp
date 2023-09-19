#include<stdio.h>
int isPrime(int k)
{
    int j;
    for ( j=2; j*j<=k; j++ )    
    {                           
        if(k%j==0)  
        {
           return 0;
        }
    }
    return 1;    
}
int main()
{
    int N,k,m[11000]={0};
    scanf("%d",&N);
    for(int i=4;i<=N;i+=2)
    {
        if(i%2==0)
        {
            for(int j=2;j<N;j=j+1)
            {
                k=i-j;
                if(isPrime(j)==1&&isPrime(k)==1)
                {
                    if(j<=k&&m[i]==0)
                    {
                        printf("%d=%d+%d\n",i,j,k);
                        m[i]=1;
                    }
                    if(m[i]==1)  //如果已经输出过，则直接跳出到下一个
                    {
                        break;
                    }
                }
            }
        }
    }
    return 0;
}