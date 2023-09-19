// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n,h;
//         cin>>n>>h;
// 		int a[1009];
// 		for(int i=0;i<n;i++) {
// 			cin>>a[i];
// 		}
// 		sort(a,a+n);
// 		int f,ans=0;
// 		for(int i=0;h>0;i++){
// 			if(h%(a[n-1]+a[n-2])==0) {
// 				f=h/(a[n-1]+a[n-2]);
// 				ans=f*2;
// 				break;
// 			}
// 			if(h%(a[n-1]+a[n-2])!=0&&h%(a[n-1]+a[n-2])<=a[n-1]) {
// 				f=h/(a[n-1]+a[n-2]);
// 				ans=f*2+1;
// 				h=0;
// 				break;
// 			}
// 			if(h%(a[n-1]+a[n-2])!=0&&h%(a[n-1]+a[n-2])>a[n-1]) {
// 				f=h/(a[n-1]+a[n-2]);
// 				ans=f*2+2;
// 				h=0;
// 				break;
// 			}
// 		}
// 		cout<<ans<<endl;
//     }
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int a[100009],b[100009];
        for(int i=0;i<n;i++){
            cin>>a[i];
            b[i]=a[i];
        }
        sort(a,a+n);
        bool flag=false;
        for(int i=0;i<n;i++){
            if(a[i]!=b[i]){
                flag=true;
                break;
            }
        }
        if(!flag) {cout<<"YES\n";}
        else{
            int flag=false;
            int l=max(0,n-x),r=min(n,x);
            for(int i=l;i<r;i++){
                if(a[i]!=b[i]){
                    flag=true;
                    break;
                }
            }
            if(flag) cout<<"NO\n";
            else cout<<"YES\n";
        }
    }
    return 0;
}