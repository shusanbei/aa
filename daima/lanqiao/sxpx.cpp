#include<bits/stdc++.h>
using namespace std;
// bool cmp(int a,int b){
//     return a>b;
// }
// int a[100010],n,m,x,y;
// int main(){
//     cin>>n>>m;
//     for(int i=1;i<=n;i++){
//         a[i]=i;
//     }
//     for(int i=0;i<m;i++){
//         cin>>x>>y;
//         if(x==0) sort(a+1,a+y+1,cmp);
//         else sort(a+y,a+n+1);
//     }
//     for(int i=1;i<=n;i++){
//             if(i!=n) cout<<a[i]<<" ";
//             else cout<<a[i];
//         }
//     return 0;
// }

// int a[22222222];
// int main(){
//     a[1]=a[2]=a[3]=1;
//     for(int i=4;i<20190325;i++){
//         a[i]=(a[i-1]+a[i-2]+a[i-3])%10000;
//     }
//     cout<<a[20190324];
//     return 0;
// }

// bool er(int n){
//     while(n){
//         if(n%10==2||n%10==4) return 0;
//         n=n/10;
//     }
//     return 1;
// }
// int main(){
//     int ans=0;
//     for(int i=1;i<2019;i++){
//         for(int j=i+1;j<2019;j++){
//             for(int k=j+1;k<2019;k++){
//                 if(er(k)&&er(i)&&er(j)&&i+j+k==2019){
//                     ans++;
//                 }
//             }
//         }
//     }
//     cout<<ans;
//     return 0;
// }

int one(int n){
    int re=0;
    while(n){
        if(n%10==1) re++;
        n=n/10;
    }
    return re;
}
int main(){
    int x=1;
    int ans=0;
    while(1){
        ans+=one(x);
        if(ans>=2021){
            break;
        }
        else x++;
    }
    cout<<x<<" "<<ans;
    return 0;
}