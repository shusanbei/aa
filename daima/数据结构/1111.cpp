// #include <bits/stdc++.h>
// using namespace std;

// #define IOS std::ios::sync_with_stdio(false);std::cin.tie(nullptr);
// #define LL long long
// #define endl '\n'

// // #define x first
// // #define y second
// #define pb push_back
// #define qb pop_back
// #define pf push_front
// #define qf pop_front

// LL a,b;
// inline void solve(){
//     cin>>a>>b;
//     a=abs(a);
//     if(b>0){
//         cout<<a<<endl;
//     }
//     else{
//         cout<<-1*a<<endl;
//     }
//     return;
// }

// signed main(){
//     IOS;
//     LL tt=1;
//     // cin >> tt;
//     while(tt --){
//         solve();
//     }

//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;

// #define IOS std::ios::sync_with_stdio(false);std::cin.tie(nullptr);
// #define LL long long
// #define endl '\n'

// // #define x first
// // #define y second
// #define pb push_back
// #define qb pop_back
// #define pf push_front
// #define qf pop_front

// LL n,m;
// LL a[200009],b[200009];
// LL c[200009];
// inline void solve(){
//     cin>>n>>m;
// 	for(LL i=n;i>=1;i--){
// 		cin>>a[i];
// 	}
// 	for(LL i=m;i>=1;i--){
// 		cin>>b[i];
// 	}
// 	LL ma=max(m,n);
// 	LL jin=0;
// 	LL now=0;
// 	for(LL i=1;i<=ma;i++){
// 		now=a[i]+b[i]+jin;
// 		c[i]=(now)%(i+1);
// 		jin=now/(i+1);
// 	}
// 	if(jin) cout<<jin<<" ";
// 	for(LL i=ma;i>=1;i--){
// 		cout<<c[i]<<" ";
// 	}
// }

// signed main(){
//     IOS;
//     LL tt=1;
//     // cin >> tt;
//     while(tt --){
//         solve();
//     }

//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;

// #define IOS std::ios::sync_with_stdio(false);std::cin.tie(nullptr);
// #define LL long long
// #define endl '\n'

// // #define x first
// // #define y second
// #define pb push_back
// #define qb pop_back
// #define pf push_front
// #define qf pop_front

// LL n,m;
// LL a[100009],b[100009];
// inline void solve(){
// 	cin>>n>>m;
// 	for(LL i=0;i<n;i++){
// 		cin>>a[i];
// 		b[i]=a[i];
// 	}
// 	sort(a,a+n);
// 	sort(b,b+n);
// 	if(m==0){
// 		cout<<a[n-1]-a[0]<<endl;
// 	}
// 	else if(m>=n-1){
// 		cout<<0<<endl;
// 	}
// 	else{
// 		LL ans=1e9,re=m;
// 		for(LL i=0;i<n;i++){
// 			cout<<"1i//////"<<i<<endl;
// 			a[i]=a[n-1-i];
// 			m--;
// 			if(m==0){
// 				cout<<"1????"<<endl;
// 				cout<<"a[n-1-i]"<<a[n-1-i]<<"a[i+1]"<<a[i+1]<<endl;
// 				ans=min(a[n-1-i]-a[i+1],ans);
// 				break;
// 			}

// 			a[n-1-i]=a[i+1];
// 			m--;
// 			if(m==0){
// 				cout<<"2????"<<endl;
// 				cout<<"a[n-2-i]"<<a[n-2-i]<<"a[i+1]"<<a[i+1]<<endl;
// 				ans=min(a[n-2-i]-a[i+1],ans);
// 				break;
// 			}
// 		}

// 		for(LL i=0;i<n;i++){
// 			cout<<"2i//////"<<i<<endl;
// 			b[n-1-i]=b[i];
// 			re--;
// 			if(re==0){
// 				cout<<"3????"<<endl;
// 				cout<<"b[n-2-i]"<<b[n-2-i]<<"b[i+1]"<<b[i+1]<<endl;
// 				ans=min(b[n-2-i]-b[i+1],ans);
// 				break;
// 			}

// 			b[i]=b[n-2-i];
// 			re--;
// 			if(re==0){
// 				cout<<"b[n-2-i]"<<b[n-2-i]<<"b[i+1]"<<b[i+1]<<endl;
// 				cout<<"4????"<<endl;
// 				ans=min(b[n-2-i]-b[i+1],ans);
// 				break;
// 			}
// 		}
// 		cout<<ans<<endl;
// 	}
// }

// signed main(){
//     IOS;
//     LL tt=1;
//     // cin >> tt;
//     while(tt --){
//         solve();
//     }

//     return 0;
// }




#include <bits/stdc++.h>
using namespace std;

#define IOS std::ios::sync_with_stdio(false);std::cin.tie(nullptr);
#define LL long long
#define endl '\n'

// #define x first
// #define y second
#define pb push_back
#define qb pop_back
#define pf push_front
#define qf pop_front

LL k;
LL fun(LL n){
	return 2*n*n+3*n;
}
inline void solve(){
    LL q;
	cin >> q;
	while(q--){
		LL k;
		cin>>k;
        LL ans;
		LL l=0,r=4e9;
		while(l<r){
			LL mid=(l+r+1)/2;
			if(fun(mid)==k){
				l=mid;
				break;
			}
			if (k>fun(mid)) l=mid;
			else r=mid-1;
		}
		k=k-fun(l);
		l++;
	    if(k==0){
			cout<<"-1"<<endl;
			continue;
		}
		if(k<=2){
			cout<<"0"<<endl;
		} 
        else{
			k-=2;
            ans=0;
			if(k<=l){
				ans=k;
			}
            else if(k>l&&k<=3*l){
				ans=2*l-k;
			}
            else{
				ans=k-4*l;
			}
			cout<<ans<<endl;
		}
	}
}

signed main(){
    IOS;
    LL tt=1;
    // cin >> tt;
    while(tt --){
        solve();
    }

    return 0;
}