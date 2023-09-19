//A
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// 	int t;
// 	cin>>t;
// 	while(t--){
// 		int n,a[66],sum=0;
// 		cin>>n;
// 		for(int i=1;i<=n;i++){
// 			cin>>a[i];
// 			sum+=a[i];
// 		}
// 		bool flag=false;
// 		for(int i=1;i<=n;i++){
// 			if(a[i]*n==sum) {
// 				flag=true;
// 				break;
// 			}
// 		}
// 		if(flag) cout<<"YES"<<endl;
// 		else cout<<"NO"<<endl;
// 	}
// 	return 0;
// }


//B
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n,p[100009],ans=0;
//         cin>>n;
//         for(int i=0;i<n;i++) cin>>p[i];
//         for(int i=1;i<n;i++){
//             if(p[i-1]>p[i]){
//                 ans++;
//                 p[i]=0;
//             }
//         }
//         cout<<ans<<endl;
//     }
//     return 0;
// }
