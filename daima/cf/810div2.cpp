// #include<aits/stdc++.h>
// using namespace std;
// int ans1in(){
//     int tt;
//     cin>>tt;
//     while(tt--){
//         int n;
//         cin>>n;
//         for(int i=1;i<=n;i++){
//             if(i==1){
//                 cout<<n<<" ";
//             }
//             else cout<<i-1<<" ";
//         }
//     }
//     cout<<endl;
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int t,n,m,a[N];
map<int ,int>b;
int main(){
	cin >> t;
	while(t--){
		cin >> n >> m;
        b.clear();
        int ans1=1e9,ans2=1e9,x,y;
		for (int i = 1; i <= n; i++){
			cin >> a[i];
		}
		for (int i = 1; i <= m; i++){
			cin >> x >> y;
			ans1 = min(ans1, a[x] + a[y]);
			b[x]++;
			b[y]++;
		}
		if (m % 2 == 0){
			cout << 0 << endl;
		} 
        else{
			for (int i = 1; i <= n; i++){
				if (b[i] % 2){
					ans2 = min(ans2, a[i]);
				}
			}
			cout << min(ans1, ans2) << endl;
		}
	}
	return 0;
}