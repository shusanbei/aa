#include<bits/stdc++.h>
using namespace std;
// 两两比较相邻元素A(I)和A(I+1)(I=1,2,…N-1),如果A(I)>A(I+1),则交换A(I)和A(I+1)的位置；
// 对剩下的N-1个元素，再两两进行比较，按同样规则交换它们的位置,经过N-2次比较,将次最大值交换到A(N-1)的位置;
// 如法炮制,经过N-1趟的“冒泡处理”,每趟进行N-i次的比较,全部数列有序。

// 时间：O（n^2），空间：O（1），就地排序
int n,a[100000009];
void bubbling_sort(int a[]){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }
}

int main(){
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];

    bubbling_sort(a);

    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}