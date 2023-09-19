//A 判断该数组是否排好序即可，若没有排好序者分段排序一定有排成乱序的情况
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n,a[10009],b[10009],x=0;
//         cin>>n;
//         for(int i=0;i<n;i++){
//             cin>>a[i];
//             b[x++]=a[i];
//         }
//         sort(a,a+n);
//         int tem=1;
//         for(int i=0;i<n;i++){
//             if(a[i]!=b[i]) {
//                 tem=0;
//                 break;
//             }
//         }
//         if(tem) cout<<"NO"<<endl;
//         else cout<<"YES"<<endl;
//     }
//     return 0;
// }


//B 总价值量最大无非就是将数组的每一位都进行计算价值，然后相加
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a;
        long long ans=0;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a;
            ans+=(i+1)*(n-i)*(!a+1); //出现次数*贡献价值
        }
        cout<<ans<<endl;
    }
    return 0;
}


//C
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a[100010],n,cnt=0,sum=0;//记得开long long
        cin>>n;
        bool tem=true;
        for(int i=1;i<=n;i++) cin>>a[i]; 
        if(n==3&&a[2]%2){ //判断数组内只有三个数时，中间一个数是否为奇数，如果为奇数则一定不符合要求
            cout<<-1<<endl;
            continue;
        }
        for(int i=2;i<n;i++){
            sum+=a[i];
            if(a[i]%2) cnt++;
            if(a[i]>1) tem=false;
        }
        if(tem) { //如果2~n-1都为1则一定不符合要求
            cout<<-1<<endl;
            continue;
        }
        cout<<(sum+cnt)/2<<endl;//除去首尾元素，每个元的次数是：奇数(a[i]+1)/2; 偶数a[i]/2
    }
    return 0;
}