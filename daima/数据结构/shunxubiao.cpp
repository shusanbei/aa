#include<stdio.h>
#include<malloc.h>
typedef int ElemType;
const int N=100;
typedef struct
{
   ElemType date[N];
   int length; 
}SqList;

//初始化线性表
void InitList(SqList *&l){
    l=(SqList *)malloc(sizeof(SqList));
    l->length=0;
}
//销毁线性表
void DestroyList(SqList *&l){
    free(l);
}
//判断线性表是否为空
bool ListEmpty(SqList *&l){
    return (l->length==0);
}
//求线性表的长度
int ListLength(SqList *&l){
    return l->length;
}
//输出线性表
void DispList(SqList *&l){
    for(int i=0;i<l->length;i++) printf("%d ",l->date[i]);
    printf("\n");
}
//按序号求线性表中的元素
bool GetElem(SqList *&l,int i,ElemType &e){
    if(i<1 || i>l->length) return 0;
    e=l->date[i-1];
    return 1;
}
//按元素查找
int LocateElem(SqList *&l,ElemType e){
    int i=0;
    while(i<l->length && l->date[i]!=e) i++;
    if(i>=l->length) return 0;
    else return i+1;
}
//插入数据元素
bool ListInsert(SqList *&l,int i,ElemType e){
    if(i<1 || i>l->length+1 || l->length==N) return 0;
    i--;
    for(int j=l->length;j>i;j--){
        l->date[j]=l->date[j-1];
    }
    l->date[i]=e;
    l->length++;
    return 1;
}
//删除数据元素  删除第i个元素 并得到这个数e
bool ListDelete(SqList *&l,int i,ElemType e){
    if(i<1 || i>l->length) return 0;
    i--;
    e=l->length;
    for(int j=i;j<l->length;j++){
        l->date[j]=l->date[j+1];
    }
    l->length--;
    return 1;
}
int main(){
    SqList *l;
    printf("初始化l\n");
    InitList(l);
    printf("ListEmpty(l)=%d\n",ListEmpty(l));
    printf("在l的位置1插入元素123\n"); ListInsert(l,1,123);
    printf("在l的位置2插入元素223\n"); ListInsert(l,2,223);
    printf("在l的位置3插入元素323\n"); ListInsert(l,3,323);
    printf("在l的位置4插入元素423\n"); ListInsert(l,4,423);
    printf("在l的位置5插入元素523\n"); ListInsert(l,5,523);
    printf("在l的位置6插入元素623\n"); ListInsert(l,6,623);
    printf("l:"); DispList(l);
    printf("ListLength(l)=%d\n",ListLength(l));
    printf("ListEmpty(l)=%d\n",ListEmpty(l));
    int i,e;
    printf("输入你要得到的元素位置:");
    scanf("%d",&i);
    if(GetElem(l,i,e)) printf("l的第%d个元素为%d\n",i,e);
	else printf("位置i错误\n"); 
	
    printf("输入你要查找的元素:");
    scanf("%d",&e);
    if(LocateElem(l,e)) printf("第一个值为%d的元素的逻辑符号为:%d\n",e,LocateElem(l,e));
	else printf("%d不存在!\n",e);
	
    printf("l的位置1插入元素111\n"); ListInsert(l,1,111);
    printf("插入后线性表为l:"); DispList(l);
    printf("删除第4个元素\n"); ListDelete(l,4,e);
    printf("删除后线性表为l:"); DispList(l);
    printf("销毁l\n");
    DestroyList(l);
    return 0;
}