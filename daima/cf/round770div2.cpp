// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n,k;
//         string s1,s2;
//         cin>>n>>k>>s1;
//         for(int i=0;i<n;i++){
//             s2+=s1[n-i-1];
//         }
//         if(k==0){
//             cout<<1<<endl;
//         }
//         else{
//             if(s1==s2) cout<<1<<endl;
//             else cout<<2<<endl;
//         }
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// const int N=2e5+10;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         long long n,x,y,a[N];
//         cin>>n>>x>>y;
//         x%=2,y%=2;
//         for(int i=0;i<n;i++){
//             cin>>a[i];
//             x=(x+a[i])%2;
//         }
//         if(x==y) cout<<"Alice"<<endl;
//         else cout<<"Bob"<<endl;
//     }
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,x=1,a[520][520];
        cin>>n>>k;
        if(k==1){
    		cout<<"YES"<<endl;
    		for(int i=1;i<=n;i++) cout<<i<<endl;;
    		continue;
		}
		if(n%2==1){
			cout<<"NO"<<endl;
			continue;
		}
		cout<<"YES"<<endl;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=k;j++){
				a[i][j]=x;
                x+=n;
            }
            x=i+1;
        }
        for(int i=1;i<=n;i++){
			for(int j=1;j<=k;j++){
				cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }

        // for(int i=1;i<=n;i++){
		// 	for(int j=1;j<=k;j++){
		// 		cout<<(j-1)*n+i<<" ";
        //     }
        //     cout<<endl;
        // }
    }
    return 0;
}