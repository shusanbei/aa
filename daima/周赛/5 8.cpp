#include<bits/stdc++.h>
using namespace std;
int main(){
    int ans=1e9;
    string s,a;
    while(cin>>s){
        int len=s.size();
        if(s=="."){
            break;
        }
        if(ans>len && s!="."){
            ans=s.size();
            a=s;
        }
    }
    cout<<a;
    return 0;
}











// int main(){
//     long long x,y,n,ans=0;
//     cin>>x>>y>>n;
//     ans=y;
//     for(int i=0;i<n-2;i++){
//         ans+=(y-x);
//     }
//     cout<<ans;
//     return 0;
// }

// int main(){
//     int a[110],x=0,n;
//     do{
//         cin>>n;
//         a[x++]=n;
//     }while(n!=0);
//     for(int i=x-2;i>=0;i--){
//         cout<<a[i]<<" ";
//     }
//     return 0;
// }

// int main(){
//     char s[210], ans[210];
//     int minn = 210;
//     int len;
//     while(1){
//         cin >> s;
//         len = strlen(s);
//         if(s[len-1] == '.'){
//             s[--len]=' ';
//             if(len < minn){
//                 strcpy(ans, s);
//             }
//             break;
//         }
//         else{
//             if(len < minn) {
//                 minn = len;
//                 strcpy(ans, s);
//             }
//         }
//     }
//     cout << ans << endl;
//     return 0;
// }

// int main(){
//     int n;
//     cin>>n;
//     while (n--){
//         int a,b,c,x,y;
//         cin>>a>>b>>c>>x>>y;
//         int t=max(0,x-a)+max(0,y-b);
//         if(c>=t)puts("YES");
//         else puts("NO");
//     }
//     return 0;
// }

//e
// int main(){
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n,num=0,a[100009];
//         cin>>n;
//         for(int i=1;i<=n;i++) {
//             cin>>a[i];
//             if(a[i]<0) num++;
//         }
//         for(int i=1;i<=n;i++) {
//             if (i<=num) {
//                 if(a[i]>0) a[i]=0-a[i];
//             }
//             else {
//             if(a[i]<0) a[i]=0-a[i];
//             }
//         }
//         int ans=1;
//         for (int i=1;i<=n-1;i++){
//             if (a[i+1]<a[i]) {
//                 ans=0;
//                 break;
//             }
//         }
//         if(ans) cout<<"YES\n";
//         else cout<<"NO\n";
//     }
// 	return 0;
// }



// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//   	    int x,y;
//         cin>>x>>y;
//         if (y%x!=0){
//             cout<<"0 0"<<endl;
//         } 
//         else{
//             cout <<"1 "<<y/x<<endl;
//         }
//     }
// }
