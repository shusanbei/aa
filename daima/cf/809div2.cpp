// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin >> t;
//     while(t--){
//         int n,m,a[55];
//         string s;
//         cin >> n >> m;
//         for (int i = 1; i <= m; i++) {
//             a[i] = 0;
//         }
//         for (int i = 1; i <= n; i++) {
//             int x; 
//             cin >> x;
//             int tem1 = min(x, m - x + 1), tem2 = max(x, m - x + 1);
//             if (a[tem1] == 1) a[tem2] = 1;
//             else a[tem1] = 1;
//         }
//         for (int i = 1; i <= m; ++i) {
//             if (a[i]) cout << 'A';
//             else cout << 'B';
//         }
//         cout << '\n';
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
const int maxn=1e5+5;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,ans[maxn]={0},a[maxn]={0},tem[maxn]={0};
        cin>>n;
        for(int i=1;i<=n;i++) {
            cin>>a[i];
            ans[a[i]]++;
        }
        for(int i=1;i<=n;i++){
            if(tem[a[i]] && (i-tem[a[i]]+1)%2) ans[a[i]]--;
            tem[a[i]]=i;
        }
        for(int i=1;i<=n;i++) {
            cout<<ans[i]<<' ';
        }
        cout<<endl;
    }
    return 0;
}