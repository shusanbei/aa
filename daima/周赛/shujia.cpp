//A
// #include<bits/stdc++.h>
// //#define int long long
// using namespace std;
// const int num = 1e5 + 10,maNum = 1e9 + 5;
// int sum, ans;
// int a[1000010];
// int main()
// {
// 	cin >> k >> n;
// 	temp = 0;
// 	ans = 0;
// 	for (int i = 1; i <= n; i++)
// 	{
// 		cin >> m;
// 		for (int i = m; i <= k; i += m)
// 		{
// 			if (a[i] == 1) {
// 				a[i] = 0;
// 				temp--;
// 			}
// 			else {
// 				a[i] = 1;
// 				temp++;
// 			}
// 		}
// 		ans = max(ans, temp);
// 	}
// 	cout << ans << endl;
// 	return 0;
// }


//B
// #include <bits/stdc++.h>
// using namespace std;

// #define IOS std::ios::sync_with_stdio(false);std::cin.tie(nullptr);
// #define int long long
// #define LL long long
// #define endl '\n'

// const double CLOCKS_PER_SECOND = ((clock_t)1000);
// const double CLOCKS_PER_MILLISECOND = ((clock_t)1);
// //#define x first
// //#define y second

// int n,a[100000],b[100000];
// bool check(int x,int k)
// {
//     if(b[x]-a[x]<k) return false;
//     if(x+k>n) return false;
//     int sum=max(a[x],a[x+k]);
//     if(b[x]-sum>=k&&b[x+k]-sum>=k) return true;
//     else return false;
// }
// signed main(){
//     IOS;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         cin>>a[i]>>b[i];
//     }
//     int k=1;
//     for(int i=1;i<=n;i++){
//         while (check(i,k)){
//             k++;
//         }
//     }
//     cout<<k<<endl;
//     return 0;
// }


//G
// #include <bits/stdc++.h>
// using namespace std;

// #define IOS std::ios::sync_with_stdio(false);std::cin.tie(nullptr);
// #define int long long
// #define LL long long
// #define endl '\n'

// const double CLOCKS_PER_SECOND = ((clock_t)1000);
// const double CLOCKS_PER_MILLISECOND = ((clock_t)1);
// //#define x first
// //#define y second


// string s[2510];
// signed main(){
//     IOS;
//     int n,sum=0;
//     cin>>n;
//     cin>>s[0];
//     for(int i=1;i<n;i++){
//         string tem;
//         cin>>tem;
//         if(tem=="SUB"){
//             int x,y,z;
//             cin>>x>>y>>z;
//             s[i] = s[x].substr(y, z);
//         }
//         if(tem=="APP"){
//             int x,y;
//             cin>>x>>y;
//             s[i] = s[x] + s[y];
//         }  
//         for (int i = 0; i < s[n - 1].length(); i++){
//             sum += s[n - 1][i];
// 		    sum %= 1000000007;
//         }
//     }
//     cout<<sum<<endl;
//     return 0;
// }




//D
// #include<bits/stdc++.h>
// using namespace std;
// int l[100100];
// int r[100100];
// int a[200100];
// int main()
// {
//     int n,m,k;
//     cin>>n>>m>>k;
//     memset(l,0x3f3f3f,sizeof(l));
//     memset(r,-1,sizeof(r));
//     for(int i=0;i<k;i++)
//     {
//         int x;
//         cin>>x>>a[i];
//         l[x]=min(l[x],a[i]);
//         r[x]=max(r[x],a[i]);
//     }
//     k=0;
//     for(int i=0;i<n;i++)
//     {
//         if(r[i]<0) 
//         {
//             continue;
//         }
//         a[++k]=l[i];
//         a[++k]=r[i];
//     }
//     sort(a,a+k);
//     long long res=n-1,mid=k/2;
//     for(int i=0;i<n;i++)
//     {
//         if(r[i]<0) 
//         {
//             continue;
//         }
//         if(a[mid]<=l[i]) res+=(r[i]-a[mid])*2;
//         else if(a[mid]>=r[i]) res+=(a[mid]-l[i])*2;
//         else res+=(r[i]-l[i])*2;
//     }
//     cout<<res<<endl;
//     return 0;
// }


//E
#include <bits/stdc++.h>
using namespace std;

#define IOS std::ios::sync_with_stdio(false);std::cin.tie(nullptr);
#define int long long
#define LL long long
#define endl '\n'

string s[10010];
int a[10010];
signed main(){
    IOS;
    double ma=0,mi=0;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s[i]>>a[i];
        ma += min(a[i]+0.49,100.0);
        mi += max(0.0,a[i]-0.5);
    }
    if(mi>100||ma<100) cout<<"IMPOSSIBLE"<<endl;
    else{
        for(int i=0;i<n;i++){
            double ansmi=max(max(0.0,a[i]-0.5),min(a[i]+0.49,100.0)-(ma-100));
            double ansma=min(min(a[i]+0.49,100.0),max(0.0,a[i]-0.5)+(100.0-mi));
            
            for(int j=0;j<s[i].length();j++){
                printf("%c",s[i][j]);
            }
            printf(" %.2lf %.2f\n",ansmi,ansma);
        }
    }
    return 0;
}

