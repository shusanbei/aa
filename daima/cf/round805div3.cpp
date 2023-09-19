// #include<bits/stdc++.h>
// using namespace std;
// int jiweishu(int A)
// {
//     for(int i=1;;i++)
//     {
//         if(A/10==0)
//         {
//             return i;
//             break;
//         }
//         A=A/10;
//     }
// }
// long long s(int n){
//     long long n=1;
//     for(int i=0;i<n;i++){
//         n*=10;
//     }
//     return n;
// }
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         long long m;
//         cin>>m;
//         cout<<m-s(jiweishu(m)-1);
//         cout<<endl;
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
// 	cin>>t;
// 	while(t--){
// 		string s;
// 		cin>>s;
// 		set<char> st;
// 		int cnt=1;
// 		for(auto c:s){
// 			st.insert(c);
// 			if(sz(st)>3){
// 				cnt++;
// 				st.clear();
// 				st.insert(c);
// 			}
// 		}
// 		cout<<cnt<<endl;
// 	}
// 	return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,u[200009],mmax=-1;
        cin>>n>>k;
        for(int i=0;i<n;i++){
            cin>>u[i];
            mmax=max(mmax,u[i]);
        }
        while(k--){
            int a,b;
            cin>>a>>b;
            if(u[b]>mmax||u[a]>mmax) cout<<"NO"<<endl;
            else{
                if(u[a]&&u[b]&&u[a]<=u[b]) {
                    cout<<"YES"<<endl;
                }
                else cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}