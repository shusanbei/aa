// #include<stdio.h>
//int main()
//{
  //  int a=0,b=0,c=0,d=0,x;
 //   scanf("%d",&x);
  //  if (x%2==0&&x>4&&x<=12) a=1;
  //  if (x%2==0||(x>4&&x<=12)) b=1;
 //   if((x%2==0&&x<=4&&x>12)||(x%2!=0&&x>4&&x<=12)) c=1;
 //   if(x%2!=0&&(x<=4||x>12)) d=1;
  //  printf("%d %d %d %d",a,b,c,d);
  //  return 0;
//}

#include<bitsdc++.h>
using namespace std;
int main(){
    int a[3];
    char s[3];//字符串数组  因为读入是没有空格的
    for(int i=0;i<3;i++)
        cin>>a[i];//读入 
    sort(a,a+3);//排序 
    //自行百度搜索 C语言快速排序函数 及使用方法
    for(int i=0;i<3;i++){
        cin>>s[i];//读入 ABC
        cout<<a[s[i]-'A']<<" ";//看仔细一点
        
    }
        
        
    return 0;
}

