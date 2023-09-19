// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t,h,e;
//     scanf("%d%d%d",&t,&h,&e);
//     int ans=t*0.2+h*0.3+e*0.5;
//     printf("%d",ans);
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     scanf("%d",&t);
//     int a[1009],p[1009],ans[1009]={0};
//     for(int i=0;i<t;i++)
//     {
//         scanf("%d%d",&a[i],&p[i]);
//     }
//     for(int i=0;i<t;i++)
//     {
//         if(p[i]<16)
//         {
//             ans[i]=a[i]-10;
//         }
//         if(p[i]>20)
//         {
//             ans[i]=a[i]-(p[i]-20);
//         }
//         if(p[i]>=16&&p[i]<=20)
//         {
//             ans[i]=a[i];
//         }
//         if(ans[i]<0)
//         {
//             ans[i]=0;
//         }
//     }
//     for(int i=0;i<t;i++)
//     {
//         printf("%d\n",ans[i]);
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int a[1009];
//     for(int i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     int max=-1,min=1e9;
//     for(int i=0;i<n;i++)
//     {
//         if(max<a[i])
//         {
//             max=a[i];
//         }
//         if(min>a[i])
//         {
//             min=a[i];
//         }
//     }
//     int ans[1009]={0};
//     for(int i=0;i<n;i++)
//     {
//         ans[i]=100*(a[i]-min)/(max-min);
//     }
//     for(int i=0;i<n;i++)
//     {
//         printf("%d ",ans[i]);
//     }
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int x[100009],ans[100009]={0},tem=0;
// int prime(int num)
// {
// 	int i,k;
// 	if(num>=2)
// 	{
// 		k=sqrt(num);
// 		for(i=2;i<=k;i++)
// 		{
// 			if(num%i==0)
// 				break;
// 		}
// 		if(i>=k+1)
// 			return 1;
// 		else
// 			return 0;
// 	}
// 	else
// 		return 0;
// }
// int main()
// {
//     int t;
//     scanf("%d",&t);
//     for(int i=0;i<t;i++)
//     {
//         scanf("%d",&x[i]);
//     }
//     for(int i=0;i<t;i++,tem++)
//     {
//         for(int j=0;j<x[i];j++)
//         {
//             if(prime(x[i]^j)) ans[tem]++;
//         }
//     }
//     for(int i=0;i<tem;i++)
//     {
//         printf("%d\n",ans[i]);
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int n,k;
// int x,y,t,tem,ans[1009]={0};
// int a,b,po=0;
// int main()
// {
//     scanf("%d%d",&n,&k);
//     for(int i=0;i<n;i++)
//     {
//         scanf("%d%d",&t,&tem);
//         if(t==1)
//         {
//             for(int j=0;j<tem;j++)
//             {
//                 scanf("%d%d",&x,&y);
//                 ans[x]=y;
//             }
//         }
//         if(t==2)
//         {
//             scanf("%d%d",&a,&b);
//             if(b<k)
//             {
//                 for(int j=a;j<=b;j++)
//                 {
//                     if(ans[j]==tem) po++;
//                 }
//             }
//             else
//             {
//                 for(int j=a;j<=k;j++)
//                 {
//                     if(ans[j]==tem) po++;
//                 }
//             }
//             printf("%d\n",po);
//             po=0;
//         }
//     }
//     return 0;
// }

// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char arr[10000];
//     int x=0;
//     gets(arr);
//     for(int i=0;i<(int)strlen(arr);i++)
//     {
//         if(arr[i]==' ')
//         {
//             x++;
//         }
//     }
//     printf("%d",x+1);
//     return 0;
// }

// #include<stdio.h>
// #include<string.h>
// #define MAXN 100
// void str_bin(char str1[],char str2[]);
// int main()
// {
//     char str1[MAXN],str2[MAXN];
//     gets(str1);
//     gets(str2);
//     str_bin(str1,str2);
//     return 0;
// }
// void str_bin(char str1[],char str2[])
// {
//     int i=0,n;
//     char temp;
//     strcat(str1,str2);
//     n=strlen(str1);
//     for(i=0;i<n;i++)
//     {
//         for(int j=0;j<n-i;j++)
//         {
//             if(str1[j]>str1[j+1])
//             {
//                 temp=str1[j];
//                 str1[j]=str1[j+1];
//                 str1[j+1]=temp;
//             }
//         }
//     }
//     for(i=1;i<n;i++){
//         printf("%c",str1[i]);
//     }
// }

#include<stdio.h>
struct student
{ int num;
 char name[20];
 float score [3];
}stu [2];
int main()
{int i,n;
float ave1=0;
float ave2=0;
float ave3=0;
int maxsum=0;
int maxi=0;
for(i=0;i<2;i++)
{scanf("%d,%s,%d,%d,%d",&stu[i].name,&stu[i].num,&stu[i].score[0],&stu[i].score[1],&stu[i].score[2]);}
//printf("%d,%s,%d,%d,%d",stu[i].name,stu[i].num,stu[i].score[0],stu[i].score[1],stu[i].score[2]);
for(int i=0;i<2;i++){
ave1+=stu[i].score[0];
ave2+=stu[i].score[1];
ave3+=stu[i].score[2];
//printf("%f,%f,%f",ave1,ave2,ave3);
int sum=stu[i].score[0]+stu[i].score[1]+stu[i].score[2];
if(sum>maxsum)
	maxsum=sum;
 maxi=i;
}
ave1=ave1/3.0;
ave2=ave2/3.0;
ave3=ave3/3.0;
printf("%f,%f,%f\n",ave1,ave2,ave3);
printf("%d,%s,%d,%d,%d,%lf\n",stu[maxi].num,stu[maxi].name,stu[maxi].score[0],stu[maxi].score[1],stu[maxi].score[2],
	(stu[maxi].score[0]+stu[maxi].score[1]+stu[maxi].score[2])/3.0);
return 0;
}
