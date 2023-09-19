// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         string s,t;
//         int c[5]={0};
//         cin>>s>>t;
//         int l=s.size();
//         for(int i=0;i<l;i++){
//             if(s[i]=='a') c[0]++;
//             if(s[i]=='b') c[1]++;
//             if(s[i]=='c') c[2]++;
//         }
//         for(int i=0;i<l-1;i++){
//             for(int j=0;j<l-i-1;j++){
//                 if(s[j]>s[j+1]){
//                     int m=s[j];
//                     s[j]=s[j+1];
//                     s[j+1]=m;
//                 }
//             }
//         }
//         if(c[0]&&c[1]&&c[2]&&t=="abc"){
//             for(int i=c[0];i<c[0]+c[2];i++)
//                 s[i]='c';
//             for(int i=c[0]+c[2];i<c[0]+c[1]+c[2];i++)
//                 s[i]='b';
//         }
//         cout<<s<<endl;
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         if(n%2){
//             if((n-1)/2%2){
//                 cout<<(n-1)/2-2<<" "<<(n-1)/2+2<<" "<<1<<endl;
//             }
//             else{
//                 cout<<(n-1)/2-1<<" "<<(n-1)/2+1<<" "<<1<<endl;
//             }
//         }
//         else{
//             cout<<n/2<<" "<<n/2-1<<" "<<1<<endl;
//         }
//     }
//     return 0;
// }


/*
辣椒粉喜欢排列组合。她有一个数组 a1,a2,...,an。她想让数组成为整数 1 到 n 的排列。为了达到这个目的，她可以对数组进行操作。
在每个操作中，她可以选择两个整数 i (1≤i≤n) 和 x (x>0)，然后执行 ai:=aimodx（即用 ai 除以 x 的余数替换 ai）。在不同的操作中，选择的 i 和 x 可以不同。
确定使数组成为整数 1 到 n 的排列所需的最小操作数。如果不可能，则输出-1。排列是一个数组，由从 1 到 n 以任意顺序排列的 n个不同整数组成。
例如，[2,3,1,5,4] 是一个排列，但 [1,2,2] 不是一个排列（2 在数组中出现两次）并且 [1,3,4] 也不是一个排列排列（n=3，但数组中有 4 个）。
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a[100009];
        cin>>n;
        for(int i=0;i<n;i++) cin>>a[i];
        
    }
    return 0;
}