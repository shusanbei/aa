#include<stdio.h>
struct STU
{
	char name[10];  //名字
	int yuweng;         //语文
	int shuxue;         //数学
	int yingyu;         //英语
};
int main()
{
    
    int n,m[10000];
    scanf("%d",&n);
    struct STU arr[11000];
    for(int i=0;i<n;i++)
    {
        scanf("%s %d %d %d",arr[i].name,&arr[i].yuweng,&arr[i].shuxue,&arr[i].yingyu);
        m[i]=arr[i].yuweng+arr[i].shuxue+arr[i].yingyu;
    }
    int max=-1,shu;
    for(int i=0;i<n;i++)
    {
        if(max==m[i])
        {
            continue;
        }
        if(max<m[i])
        {
            max=m[i];
            shu=i;
        }
    }
    printf("%s %d %d %d\n",arr[shu].name,arr[shu].yuweng,arr[shu].shuxue,arr[shu].yingyu);
    return 0;
}