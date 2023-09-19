#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,h=0,p=0;
    scanf("%d",&k);
    for(int i=1;;i++)
        for(int j=1;j<=i;j++)
            if(p>=k)  {printf("%d",h);return 0;}
            else
              h+=i,p++;
      return 0;
}