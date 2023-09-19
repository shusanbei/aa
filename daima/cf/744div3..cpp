// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int tt;
//     cin>>tt;
//     while(tt--){
//         string s;
//         cin>>s;
//         int a=0,b=0,c=0;
//         for(int i=0;i<s.size();i++){
//             if(s[i]=='A') a++;
//             else if(s[i]=='B') b++;
//             else c++;
//         }
//         if(a+c==b) cout<<"YES\n";
//         else cout<<"NO\n";
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int tt;
//     cin>>tt;
//     while(tt--){
//         int n,a[100],b[100],d[100];
//         cin>>n;
//         for(int i=1;i<=n;i++){
//             cin>>a[i];
//             b[i]=a[i];
//         }
//         sort(b+1,b+n+1);
//         bool flag=false;
//         for(int i=1;i<=n;i++){
//             if(a[i]!=b[i]) flag=true;
//         }
//         if(flag){
//             int l[100],r[100],cnt=0;
//             int tem=1;
//             while(tem<n){
//                 if(a[tem]==b[tem]){ 
//                     tem++;
//                     continue;
//                 }
//                 else{
//                     for(int i=n;i>tem;i--){
//                         if(b[tem]==a[i]){
//                             l[cnt]=tem;
//                             r[cnt]=i;
//                             d[cnt]=r[cnt]-l[cnt];
//                             cnt++;
//                             for(int j=i;j>tem;j--){
//                                 a[j]=a[j-1];
//                             }
//                             break;
//                         }
//                     }
//                     tem++;
//                 }
//             }
//             cout<<cnt<<endl;
//             for(int i=0;i<cnt;i++){
//                 cout<<l[i]<<" "<<r[i]<<" "<<d[i]<<endl;
//             }
//         }
//         else{
//             cout<<0<<endl;
//         }
//     }
//     return 0;
// }
//c
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int tt;
//     cin>>tt;
//     while (tt--){
//         int n,m,k;
//         cin>>n>>m>>k;
//         char s[20][20];
//         for(int i=1;i<=n;i++){
//             for(int j=1;j<=m;j++){
//                 cin>>s[i][j];
//             }
//         }

//     }
    
//     return 0;
// }

//D
#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n,a[200009];
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        
    }
    return 0;
}

//E1
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int tt;
//     cin>>tt;
//     while(tt--){
//         int n,a;
//         deque<int> q;
//         cin>>n;
//         for(int i=1;i<=n;i++){
//             cin>>a;
//             if(i==1) q.push_back(a);
//             else{
//                 if(a>q.front()) q.push_back(a);
//                 else q.push_front(a);
//             }
//         }
//         for(int i=0;i<q.size();i++){
//             cout<<q[i]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }