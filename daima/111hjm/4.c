#include<stdio.h>
#include<string.h>
 
void sort(char *a[]);
void print(char *a[]);
 
int main()
{
 char *a[] ={"while","case","default","do","unsigned","void","return","double","char","switch","continue","else","float","for","if","short","break","int","static","sizeof","long","auto","struct","typedef","signed"};
 printf("原来的序列是：\n");
 print(a);
 sort(a);
 printf("\n排序后的序列是:\n");
 print(a);
 printf("\n");
 return 0;
}
void sort(char *a[])
{
 int i,j;
 char *temp;
 for(i=0;i<24;i++)
 {
  for(j=0;j<24;j++)
  {
   if(strcmp(a[j],a[j+1])>0)
   {
    temp=a[j];
    a[j]=a[j+1];
    a[j+1]=temp;
   }
  }
 }
}
void print(char *a[])
{
 int i;
 for(i=0;i<25;i++)
 {
  printf("%s ",a[i]);
 }
}