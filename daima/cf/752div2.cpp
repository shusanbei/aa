// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n,a,maxx=-1;
//         cin>>n;
//         for(int i=1;i<=n;i++){
//             cin>>a;
//             maxx=max(maxx,a-i);
//         }
//         cout<<maxx<<endl;
//     }
//     return 0;
// }

// #include <bits/stdc++.h> 
// using namespace std;
// int  main(){
//    	int t;
//    	cin>>t;
//    	while(t--){
//         int n,a[100009];
//         cin>>n;
//         for(int i=1;i<=n;i++){
//             cin>>a[i];
//         }
//         if(n%2==0) cout<<"YES"<<endl;
//         else{
//             bool flag=false;
//             for(int i=1;i<n;i++){
//                 if(a[i]>=a[i+1]){
//                     flag=true;
//                     break;
//                 }
//             }
//             if(flag) cout<<"YES"<<endl;
//             else cout<<"NO"<<endl;
//         }
//     }
// }