// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     while(n--){
//         int a[5];
//         for(int i=0;i<3;i++){
//             cin>>a[i];
//         }
//         sort(a,a+3);
//         if(a[0]+a[1]==a[2]||(a[0]==a[1]&&a[2]%2==0)||(a[1]==a[2]&&a[0]%2==0)){
//             cout<<"YES"<<endl;
//         }
//         else{
//             cout<<"NO"<<endl;
//         }
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// struct mu{
// 	int nu;
// 	int i;
// 	int ans;
// 	int a;
// }a[200005];
// bool cmp(mu a, mu b){
// 	if(a.a != b.a){
// 		return a.a < b.a;
// 	}
// 	return a.nu < b.nu;
// }
// bool cmp1(mu a, mu b){
// 	return a.i < b.i;
// }
// int main(){
// 	int t;
// 	cin >> t;
// 	while(t--){
//         int n;
//         string s;
// 		cin>>n; 
// 		for(int i=1;i<=n;i++){
// 			cin>>a[i].nu;
// 			a[i].i=i;
// 		}
// 		cin>>s;
// 		for(int i=0;i<s.length();i++){
// 			if(s[i]=='1') a[i+1].a=1;
//             else a[i+1].a=0;
// 		}

// 		sort(a+1,a+1+n,cmp);
// 		for(int i=1;i<=n;i++){
// 			a[i].ans=i;
// 		}
// 		sort(a+1,a+1+n, cmp1);
// 		for(int i=1;i<=n;i++){
// 			cout<<a[i].ans<<" ";
// 		}
// 		cout<<endl;
// 	}
// 	return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[200005];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        
    }
    return 0;
}