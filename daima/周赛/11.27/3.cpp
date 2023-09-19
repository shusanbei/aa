#include<bits/stdc++.h>
using namespace std;
struct stu       //定义结构体，第一个是名字，后面abcde就是2017...那五个数据
{
    char name[25];
    double a,b,c,d,e;  
    double ans;
};
int cmp(const stu a,const stu b)  //cmp比较函数，百度临时照葫芦画瓢写的，，
{
    if(fabs(a.ans-b.ans)>1e-5)    //这个是比较误差，1e-5
        return a.ans>b.ans;
    else
    {
        if(strcmp(a.name,b.name)>0)return false;  //strcmp比较字符串函数，去百度看，emm百度应该比我清楚
        else return true;                        //为什么要strcmp是因为若两名选手并列，则按姓名的字典序顺序从小到大输出。
    }
}
int main()
{
    int n;
    struct stu s[200055];
    while(scanf("%d",&n)!=EOF)
    {
        double maxa=-1,maxb=-1,maxc=-1,maxd=-1,maxe=-1;  //max初赋值为-1，防止爆0，虽然与题目没啥关系..
        for(int i=0;i<n;i++)   //这个for应该看得懂，里面maxabcd就是各个数据的最大值，用来计算标准值，，
        {
            scanf("%s %lf %lf %lf %lf %lf",s[i].name,&s[i].a,&s[i].b,&s[i].c,&s[i].d,&s[i].e);
            maxa=max(s[i].a,maxa);
            maxb=max(s[i].b,maxb);
            maxc=max(s[i].c,maxc);
            maxd=max(s[i].d,maxd);
            maxe=max(s[i].e,maxe);
        }
        for(int i=0;i<n;i++)  //计算各项的的值
        {
            s[i].a=s[i].a*600/maxa;
            s[i].b=s[i].b*300/maxb;
            s[i].c=s[i].c*300/maxc;
            s[i].d=s[i].d*300/maxd;
            s[i].e=s[i].e*300/maxe;
            s[i].ans=s[i].a*0.25+(s[i].b+s[i].c)*0.25+(s[i].d+s[i].e)*0.5;
        }
        sort(s,s+n,cmp);  //给结构体排序
        for(int i=0;i<n;i++)
        {
            printf("%s %.5lf\n",s[i].name,s[i].ans);
        }
    }
}
