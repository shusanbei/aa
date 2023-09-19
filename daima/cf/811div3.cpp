// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int tt;
//     cin>>tt;
//     while(tt--){
//         int n,h,m;
//         cin>>n>>h>>m;
//         int ti1=h*60+m;
//         int ans=1e9;
//         while(n--){
//             int h,m;
//             cin>>h>>m;
//             int ti2=h*60+m;
//             if (ti2<ti1) ti2+=1440;
//             ans=min(ans,ti2-ti1);
//         }
//         cout<<ans/60<<' '<<ans%60<<endl;
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int tt;
//     cin>>tt;
//     while(tt--){
//         int n,a[200009];
//         cin>>n;
//         for(int i=1;i<=n;i++) {
//             cin>>a[i];
//         }
//         set<int> s;
//         int ans=0;
//         for(int i=n;i;i--){
//             if(s.count(a[i])){
//                 ans=i;
//                 break;
//             }
//             s.insert(a[i]);
//         }
//         cout<<ans<<'\n';
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        int tem=9;
        string s="";
        while(n){
            if(n-tem>=0){
                s=(char)(tem+'0')+s;
                n-=tem--;
            }
            else {
                s=(char)(n+'0')+s;
                n=0;
            }
        }
        cout<<s<<endl;
    }
    return 0;
}