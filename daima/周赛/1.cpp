#include<bits/stdc++.h>
using namespace std;
//a
// int main(){
// 	int t;
// 	cin >> t;
// 	while(t--) {
// 		int a,b;
// 		cin>> a >> b;
// 		if(a==b){
// 			cout<<0<<endl;
// 		}
// 		else if(a<b){
// 			if ((b-a)%2==1) cout<<1<<endl;
//             else if ((b-a)/2%2==1) cout<<2<<endl;
//             else cout<<3<<endl;
// 		}
// 		else {
// 			if((a-b)%2==0) cout<<1<<endl;
// 			else cout<<2<<endl;
// 		}
// 	}
// 	return 0;
// }


// //b
// int main(){
// 	string s;
// 	cin>>s;
// 	for(int i=0;i<s.size();i++){
// 		cout<<s[i];
// 		if(i>=2&&s[i]=='b'&&s[i-1]=='j'&&s[i-2]=='c'){
// 			cout<<',';
// 		}
// 	}
// 	return 0;
// }

//c
// const int N=1e5+9;
// int main(){
//     long long n,m,x,a[N],b[N],ans=0;
//     cin>>n>>m>>x;
//     for(int i=0;i<n;i++) {
//         cin>>a[i];
//         if(a[i]>=x) ans++;
//     }
//     for(int i=0;i<m;i++) {
//         cin>>b[i];
//         if(b[i]<=x) ans++;
//     }
//     cout<<ans;
//     return 0;
// }


//E
// int main(){
//     int n,h,s;
//     double p[1010];
//     scanf("%d%d%d",&n,&h,&s);
//     for(int i=0;i<n;i++){
//         scanf("%lf",&p[i]);
//         p[i]=p[i]/100;
//     }
//     int k,a[1010];
//     scanf("%d",&k);
//     for(int i=0;i<k;i++){
//         scanf("%d",&a[i]);
//     }
//     int t1,t2;
//     scanf("%d%d",&t1,&t2);

//     for(int i=0;i<n;i++){
//         if()
//     }
//     return 0;
// }

// const int N=2e5+9;
// long long n,k,e,v[N],a[N],b[N],
// int main(){
//     cin>>n>>k>>e;
//     for(int i=1;i<=n;i++) cin>>v[i]>>a[i]>>b[i];
//     while(n--){
//         for(int i=1;i<=n;i++){
//             if()
//         }
//     }
//     return 0;
// }



//G
// int n,,v1,v2,sx,sy,tx,ty;
// struct pp{
//     int x,y;
// }p[1010];

// int main(){
//     cin>>n;
//     for(int i=0;i<n;i++){
//         cin>>p[i].x>>p[i].y;
//     }
//     cin>>>>sx>>sy>>tx>>ty;
//     cin>>v1>>v2;
//     while()
//     return 0;
// }

//l
// const int N=1e6+10;
// int n,a[N];
// int main(){
// 	scanf("%d",&n);
// 	for(int i=0;i<n;i++){
// 		scanf("%d",&a[i]);
// 	}
// 	sort(a,a+n);
//     long long sum=0,now=0,ans=0;
//     for(int i=0;i<n;i++){
//         sum+=a[i];
//         while(now<i&&(long long)a[now+1]*(i+1)<=sum){
// 			now++;
// 		}
//         ans=max(ans,i-now);
//     }
//     printf("%lld\n",ans);
// 	return 0;
// }

//M
char ch[1010][1010];
char pattern[11][11]={"######","##..##","#....#","#....#","##..##","######"};
int n,m;
int sum=0,sum1=0;
bool check(int x,int y){
    for(int i=0;i<6;i++)
     for(int j=0;j<6;j++){
        if(ch[x+i][y+j]!=pattern[i][j])
        return false;
    }
    return true;
}
int main(){
	cin >> n >> m;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			cin >> ch[i][j];
			if (ch[i][j] == '#')sum++;
		}
	}	

	for(int i=0;i+6<n;i++){
		for(int j=0;j+6<m;j++){
			if(check(i,j)) sum1++;
		}
	}

	int B = 146;
	int P = 100;
	for (int i = 0; i < 10000; i++)
		for (int j = 0; j < 10000; j++)
			if ((i * B + j * P) == sum && (i * 2 + j)==sum1){
				cout << i << " " << j;
				break;
			}

	/*	146x+100y==sum;
		2x+y==sum1;*/
	// int x=(sum1*100-sum)/54;
    // int y=sum1-2*x;
    // cout<<x<<' '<<y<<endl;
	return 0;
}