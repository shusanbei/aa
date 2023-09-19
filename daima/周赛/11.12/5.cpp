#include<stdio.h>
int main()
{
    bool flag;
    long n,m;
    scanf("%ld %ld",&n,&m);
    int a[1000010],b[1000010];
    for(int i=1;i<=n;i++)   
    {
       scanf("%d",&a[i]);
    }
    for(int i=1;i<=m;i++)  
    {
        scanf("%d",&b[i]);
    }
    int i=1,j=1;
    while (i<=n&&j<=m)
    {
        if(a[i]==b[j])
        {
            printf("%d ",a[i]);
            flag=true;
            i++;
            j++;
        }
        else if(a[i]>b[j]) j++;
        else if(a[i]<b[j]) i++;
    }
    if(!flag)
    {
        printf("empty");
    }
    return 0;
}



#include<stdio.h>
const int N = 1e6 + 10;
int la, lb, a[N], b[N], ans;
bool flag;

int main()
{
    scanf("%d %d", &la, &lb);
    for(int i = 1; i <= la; i++) scanf("%d", &a[i]);
    for(int i = 1; i <= lb; i++) scanf("%d", &b[i]);
    int pa = 1, pb = 1;
    while(pa <= la && pb <= lb)
    {
        if(a[pa] == b[pb])
        {
            printf("%d ", a[pa]);
            flag = true; 
            pa++;
            pb++;
        }
        else if(a[pa] > b[pb]) pb++;
        else if(a[pa] < b[pb]) pa++;
    }
    if(!flag) puts("empty");
    return 0;
}