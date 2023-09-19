// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int tt;
//     scanf("%d",&tt);
//     while(tt--){
//         int n;
//         scanf("%d", &n);
//         long long maxx = -2000000000, a[n], i, s = 0;
//         for (i = 0; i<n; i++){
//             scanf("%lld", &a[i]);
//             if (a[i]>maxx){
//                 maxx = a[i];
//             }
//             s += a[i];
//         }
//         double r, ans;
//         r = (s - maxx) / (double)(n - 1);
//         ans = (double)maxx + r;
//         printf("%.9f\n", ans);
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n,k,a[100009],b[100009];
        cin>>n>>k;
        for(int i=0;i<n;i++){
            cin>>a[i];
            b[i]=a[i];
        }
        sort(b,b+n);
        bool flag=false;
        for(int i=0;i<n;i++){
            if(a[i]!=b[i]){
                flag=true;
            }
        }
        if(!flag){
            cout<<"YES\n";
        }
        else{
            int ans=0;
            for(int i=1;i<n;i++){
                if(a[i]!=(a[i-1]+1)) ans++;
            }
            if(ans<=k) cout<<"YES\n";
            else cout<<"NO\n";
        }
    }
    return 0;
}