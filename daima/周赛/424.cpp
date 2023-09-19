#include<bits/stdc++.h>
using namespace std;
//a
// int main(){
//     int m,n,t;
//     char a;
//     cin>>m>>n>>a>>t;
//     if(t==0){
// 	    for(int i=0;i<m;i++){
// 			for(int j = 0;j <n;j++){
// 				if(i==0||j==0||i==m-1||j==n-1) cout<<a;
// 				else cout<<" ";
// 			}
// 			cout<<endl;
// 		}
//     }
//     else{
//         for(int i=0;i<m;i++){
//             for(int j=0;j<n;j++){
//                 cout<<a;
//             }
//             cout<<endl;
//         }
//     }
//     return 0;
// }

//b
// int a[10000];
// int main(){
// 	int n;
// 	cin >> n;
// 	a[1]=1;
// 	int x=0,k=1;
// 	for(int i=1;i<=n;i++){
// 		x=0;
// 		for(int j=1;j<=k;j++){
// 			a[j]=a[j]*2+x;
// 			x=a[j]/10;
// 			a[j]%=10;
// 			if(x!=0&&j==k) k++;
// 		}
// 	}	
// 	for(int i=k;i>=1;i--) cout<<a[i];
// 	return 0;
// }

//c
// int n,m,k,a[200009];
// int main(){
//     cin>>n>>m>>k;
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     sort(a,a+n);
//     long long ma=a[n-1],ma_1=a[n-2],ans;
//     ans=+m/(k+1)*(ma*k+ma_1);
//     if(m%(k+1)) ans+=ma*(m%(k+1));
//     cout<<ans;
//     return 0;
// }

//d
// int main(){
//     int n,m,ans=0;
//     cin>>n>>m;
//     for(int i=0;i<110;i++){
//         for(int j=0;j<110;j++){
//             if(i*i+j==n && i+j*j==m) ans++;
//         }
//     }
//     cout<<ans;
//     return 0;
// }

//e
// int n,a[110],tem=0,cou=0,ans[110],x=0,z;
// int main(){
//     cin>>n;
//     for(int i=0;i<n;i++) cin>>a[i];
//     for(int i=0;i<n;i++){
//         if(a[i]<0) tem++;
//         if(tem==3){
//             ans[x++]=cou;
//             cou=tem=1;
//         }
//         else cou++;
//     }
//     ans[x++]=cou;
//     cout<<x<<endl;
//     for(int i=0;i<x;i++){
//         cout<<ans[i]<<" ";
//     }
//     return 0;
// }

//f
// long long t,n,m,maxx,minn,sum,a;
// int main(){
//     cin>>t;
//     while(t--){
//         cin>>n>>m;
//         sum=0,maxx=-1,minn=1e9;
//         for(int i=1;i<=n;i++) {
//             cin>>a;
//             sum+=a;
//             minn=min(minn,a);
//             maxx=max(maxx,a);
//         }
//         if(n+sum-minn+maxx<=m) cout<<"YES"<<endl;
//         else cout<<"NO"<<endl;
//     }
//     return 0;
// }