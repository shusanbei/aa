#include<bits/stdc++.h>
using namespace std;

#define ll long long

int i,j,n;
int main(){
    cin>>n;
    ll now=0;
    for(i=1;i<=n;i++){
        int x;
        scanf("%d",&x);
        ll w=1ll<<x;
        now=((now/w)+1)*w;
        if(now%(w*2)==0)now+=w;
        // cerr<<"i="<<i<<" "<<now<<endl;
    }
    cout<<now<<endl;
    return 0;
}
// int n,a[110],ans=-1;
// int main(){
//     cin>>n;
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//         ans=max(ans,a[i]);
//     }
//     cout<<ans;
//     return 0;
// }

// int m,k,tem=0,x;
// int main(){
//     cin>>m>>k;
//     x=m;
//     while(m){
//         int a=m%10;
//         m=m/10;
//         if(a==3) tem++;
//     }
//     if(x%19==0&&tem==k) cout<<"YES";
//     else cout<<"NO";
//     return 0;
// }

// int main(){
//     char n;
//     cin>>n;
//     if(n>='a'){
//         int ans=n-'a'+1;
//         cout<<ans;
//     }
//     else{
//         int ans=n-'A'+1;
//         cout<<ans;
//     }
//     return 0;
// }

// int main(){
//     int t,n;
//     cin>>t;
//     while(t--){
//        cin>>n;
//        if(n==1) cout<<0<<endl;
//        else if(n==2) cout<<1<<endl;
//        else if(n%2==0||n==3) cout<<2<<endl;
//        else cout<<3<<endl;
//     }
//     return 0;
// }

// int n,t[100009];
// long long a[100009];
// int main(){
//     cin>>n;
//     for(int i=0;i<n;i++){
//         cin>>t[i];
//     }
//     a[0]=pow(2,t[0]);
//     for(int i=1;i<n;i++){
//         if(t[i]>=t[i-1]){
//             a[i]=a[i-1]+pow(2,t[i]+1);
//         }
//         else{
//             a[i]=a[i-1]+pow(2,t[i]);
//         }
//     }
//     for(int i=0;i<n;i++){
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
//     cout<<a[n-1];
//     return 0;
// }


// int t;
// int main(){
//     cin>>t;
//     for(int i=0;i<t;i++){
//         int n,q;
//         string s;
//         cin>>n>>q>>s;
//         while(q--){
//             int l,r,ans=0;
//             cin>>l>>r;
//             for(int i=0;i<l-1;i++){
//                 if(s[i]==s[l-1]) ans=1;
//             }
//             for(int i=r;i<n;i++){
//                 if(s[i]==s[r-1]) ans=1;
//             }
//             if(ans) cout<<"YES"<<endl;
//             else cout<<"NO"<<endl;
//         }
//     }
//     return 0;
// }