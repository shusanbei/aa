#include<bits/stdc++.h>
using namespace std;
//首先是确定分界点，双路归并 合二为一
//再递归排序left right（双指针）
//最后归并 合二为一
int n,a[100000009],tem[100000009];
void merge_sort(int a[],int l,int r){
    if(l>=r) return;
    int m=(l+r)>>1;

    merge_sort(a,l,m);
    merge_sort(a,m+1,r);

    int k=0,i=l,j=m+1;
    while(i<=m&&j<=r)
        if(a[i]<=a[j]) tem[k++]=a[i++];
        else tem[k++]=a[j++];
    
    while(i<=m) tem[k++]=a[i++];
    while(j<=r) tem[k++]=a[j++];
    for(int i=l,j=0;i<=r;i++,j++) a[i]=tem[j];
}

int main(){
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];

    merge_sort(a,0,n-1);

    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    return 0;
}