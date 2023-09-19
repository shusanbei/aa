// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         string a,b;
//         cin>>n;        
//         cin>>a>>b;
//         bool flag=false;
//         for(int i=0;i<n;i++){
//             if(a[i]==b[i]&&a[i]=='1'){
//                 flag=true;
//                 break;
//             }
//         }
//         if(flag) cout<<"NO\n";
//         else cout<<"YES\n";
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int n,ar[1010][10];
// int main(){
//     int t;
//     cin>>t;
//     while (t--){
//         cin>>n;
//         for(int i=0;i<n;i++){
//             for(int j=0;j<5;j++){
//                 cin>>ar[i][j];
//             }
//         }
//         if(n%2){
//             cout<<"NO\n";
//         }
//         else{
//             string s="NO";
//             for(int i=0;i<5;i++){
//                 for(int j=i+1;j<5;j++){
//                     int a,b,c,d;
//                     a=b=c=d=0;
//                     for(int k=0;k<n;k++){
//                         if(ar[k][i]==0&&ar[k][j]==0) a++;
//                         if(ar[k][i]==0&&ar[k][j]==1) b++;
//                         if(ar[k][i]==1&&ar[k][j]==0) c++;
//                         if(ar[k][i]==1&&ar[k][j]==1) d++;
//                     }
//                     if(a==0&&b<=n/2&&c<=n/2){
//                         s="YES";
//                         break;
//                     }
//                 }
//                 if(s=="YES") break;
//             }
//             cout<<s<<endl;
//         }
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long a[200009],sum=0;
        map<double,int>tem;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
            tem[a[i]]++;
        }
        int ans=0;
        double ave=sum/n;
        for(int i=0;i<=n;i++){
            if(a[i]==ave) ans+=tem[a[i]]-1;
            else ans+=tem[ave*2-a[i]];
            tem[a[i]]--;
        }
        cout<<ans<<endl;
    }
    return 0;
}