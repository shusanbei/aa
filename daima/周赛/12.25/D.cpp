#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[10009],max=-1,min=1e7;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(max<a[i]) max=a[i];
        if(min>a[i]) min=a[i];
    }
    printf("%d",max-min);
    return 0;
}