#include<bits/stdc++.h>
#include <chrono>

using namespace std;
using namespace std::chrono;

// 两两比较相邻元素A(I)和A(I+1)(I=1,2,…N-1),如果A(I)>A(I+1),则交换A(I)和A(I+1)的位置；
// 对剩下的N-1个元素，再两两进行比较，按同样规则交换它们的位置,经过N-2次比较,将次最大值交换到A(N-1)的位置;
// 如法炮制,经过N-1趟的“冒泡处理”,每趟进行N-i次的比较,全部数列有序。

// 时间：O（n^2），空间：O（1），就地排序
int n,a[100000009],tem[100000009];
void bubbling_sort(int a[]){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }
}

//首先是确定分界点，双路归并 合二为一
//再递归排序left right（双指针）
//最后归并 合二为一

// 将一个数组从中间一分为二，形成左右两个数组
// 对左右两个数组继续按照第一步的方式递归的一分为二，直到数组只有一个元素为止
// 对数组进行合并，合并时进行排序

// 时间：O（nlogn），空间：O（n），非就地排序
void merge_sort(int a[],int l,int r){
    if(l>=r) return;
    int m=(l+r)/2;

    merge_sort(a,l,m);
    merge_sort(a,m+1,r);

    int k=0,i=l,j=m+1;
    while(i<=m&&j<=r)
        if(a[i]<=a[j]) tem[k++]=a[i++];
        else tem[k++]=a[j++];
    
    while(i<=m) tem[k++]=a[i++];
    while(j<=r) tem[k++]=a[j++];
    for(int i=l,j=0;i<=r;i++,j++) 
        a[i]=tem[j];
}

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

int main(){
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];

    auto start_time = steady_clock::now();  // 记录开始时间

    // bubbling_sort(a);
    // merge_sort(a,0,n-1);
    quick_sort(a,0,n-1);

    auto end_time = steady_clock::now();  // 记录结束时间
    auto duration = duration_cast<nanoseconds>(end_time - start_time);  // 计算时间差
    
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    cout<<endl;
    // cout << "bubbling_sort得到结果所需时间为:" << duration.count() << "ns." << endl;
    // cout << "merge_sort得到结果所需时间为:" << duration.count() << "ns." << endl;
    cout << "quick_sort得到结果所需时间为:" << duration.count() << "ns." << endl;
    return 0;
}


// 100
// 93  -12  45  -67  0  23  -81  54  37  -19 
// 66  29  -88  73  50  -14  97  -62  31  -75 
// 41  58  -83  26  69  -10  47  72  -35  95 
// -60  77  22  -38  89  -52  16  -91  64  43 
// -79  8  55  -33  86  -25  70  -99  68  -15 
// 44  -87  30  -61  78  -53  20  -92  76  -39 
// 90  -11  56  -85  24  -71  96  -32  59  -82 
// 49  74  -27  42  -80  57  -17  94  -65  40 
// 98  -9  51  -36  84  -21  63  -48  37  18 
// -74  1  -58  22  -89  53  -26  69  -12  81 -47