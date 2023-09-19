#include<stdio.h>
int IsSquare(int n)
{
      int i,flag = 0;
      for(i = 0; i<= n;i++)
      {
            if(i * i == n)
                 flag = 1;
      }
      return flag;
}
int main()
{
    int n;
    long long l,k;
    long long ans=0;
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        ans=0;
        scanf("%lld %lld",&l,&k);
        for(int i=l;i<=k;i++)
        {
           if(IsSquare(i)==1)
           {
               ans++;
           }
        }
        printf("%lld\n",ans);
    }
}