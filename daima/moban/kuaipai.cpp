#include<bits/stdc++.h>
using namespace std;
int n,a[10000009];

// 分区：将比参照值小的移动到参照值的左侧，比参照值大的移动到右侧；
// 左递归：对左侧数组进行递归；
// 右递归：对右侧数组进行递归；

// 时间：O（nlogn），空间：O（1），就地排序
void quick_sort(int a[],int l,int r){
    if(l>=r) return;

    int x=a[(l+r)/2],i=l-1,j=r+1;
    while(i<j){
        do i++; while(a[i]<x);
        do j--; while(a[j]>x);
        if(i<j) {
            swap(a[i],a[j]);
        }
    }
    quick_sort(a,l,j);
    quick_sort(a,j+1,r);
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
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];

    quick_sort(a,0,n-1);
    
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}