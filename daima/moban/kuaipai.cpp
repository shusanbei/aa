#include<bits/stdc++.h>
using namespace std;
int n,ar[10000009];

void quick_sort(int ar[],int l,int r){
    if(l>=r) return;

    int x=ar[(l+r)>>1],i=l-1,j=r+1;
    while(i<j){
        do i++; while(ar[i]<x);
        do j--; while(ar[j]>x);
        if(i<j) //swap(ar[i],ar[j]);
        {
            int tem=ar[i];
            ar[i]=ar[j];
            ar[j]=tem;
        }
    }
    quick_sort(ar,l,j);
    quick_sort(ar,j+1,r);
}

// void quick_sort(int q[], int l, int r)
// {
//     if(l >= r) return;

//     int i = l - 1, j = r + 1, x = q[l + r + 1 >> 1];//注意是向上取整,因为向下取整可能使得x取到q[l]
//     while(i < j)
//     {
//         do i++; while(q[i] < x);
//         do j--; while(q[j] > x);
//         if(i < j) swap(q[i], q[j]);
//     }
//     quick_sort(q, l, i - 1), quick_sort(q, i, r);//不用q[l..i],q[i+1..r]划分的道理和分析4中j的情况一样
// }

//从大到小改 内部while 的条件即可
int main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&ar[i]);

    quick_sort(ar,0,n-1);
    
    for(int i=0;i<n;i++) printf("%d ",ar[i]);
    return 0;
}