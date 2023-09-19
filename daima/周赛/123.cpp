//a
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     while(n--){
//         int t,ans=0;
//         cin>>t;
//         for(int i=1;i<=6;i++){
//             for(int j=i;j<=6;j++){
//                 if(i+j==t){
//                     ans++;
//                 }
//             }
//         }
//         cout<<ans<<endl;
//     }
//     return 0;
// }

//k
// #include<bits/stdc++.h>
// using namespace std;
// int tem[1000009],ans[1000009];
// int main(){
//     int p,k;
//     cin>>p>>k;
//     if(k>=p){
//         for(int i=1;i<p;i++){
//             ans[i]=i;
//         }
//         cout<<p;
//     }
//     else{
//         for(int i=1;i<=p;i++) tem[i]=i;
//         for(int i=1;i<n;i++){
            
//         }
//     }
//     return 0;
// }

//m
// #include<bits/stdc++.h>
// using namespace std;
// const int N=1e5+10;
// long long n,k,x,p0,s[N],t[N],p[N],mmax=-1,ans=0;
// int main(){
//     cin>>n>>k>>x>>p0;
//     for(int i=0;i<n;i++) cin>>s[i];
//     for(int i=0;i<k;i++) cin>>t[i];
//     for(int i=0;i<k;i++) cin>>p[i];
    
//     for(int i=0;i<k;i++){
//         p0=max(p[i]-t[i],p0);
//     }
//     for(int i=0;i<n;i++) {
//         if(s[i]*p0>=x) {
//             ans++;
//         }
//     }
//     cout<<ans;
//     return 0;
// }

//h
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     while(n--){
//         char s[40];
//         cin>>s;
//         if(strcmp(s,"ikimasu") == 0) {
//             printf("itte\n");
//         }
//         else {
//             int l=strlen(s);
//             if(s[l-7] == 's'&&s[l-6] == 'h'&&s[l-5] == 'i'){
//                 s[l-7] = '\0';
//                 printf("%sshite\n",s);
//             }
//             else if(s[l-7] == 'c'&&s[l-6] == 'h'&&s[l-5] == 'i'){
//                 s[l-7] = '\0';
//                 printf("%stte\n",s);
//             }
//             else if(s[l-6] == 'm'&&s[l-5] == 'i'){
//                 s[l-6] = '\0';
//                 printf("%snde\n",s);
//             }
//             else if(s[l-6] == 'b'&&s[l-5] == 'i'){
//                 s[l-6] = '\0';
//                 printf("%snde\n",s);
//             }
//             else if(s[l-6] == 'n'&&s[l-5] == 'i'){
//                 s[l-6] = '\0';
//                 printf("%snde\n",s);
//             }
//             else if(s[l-6] == 'k'&&s[l-5] == 'i'){
//                 s[l-6] = '\0';
//                 printf("%site\n",s);
//             }
//             else if(s[l-6] == 'r'&&s[l-5] == 'i'){
//                 s[l-6] = '\0';
//                 printf("%stte\n",s);
//             }
//             else if(s[l-6] == 'g'&&s[l-5] == 'i'){
//                 s[l-6] = '\0';
//                 printf("%side\n",s);
//             }
//             else if(s[l-5] == 'i'){
//                s[l-5] = '\0';
//                printf("%stte\n",s);
//             }
//         }
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int sex,a,b,c,d;
//     cin>>sex>>a>>b>>c>>d;
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         int sex1,age,length;
//         cin>>sex1>>age>>length;
//         if(sex!=sex1 && age>=a && age<=b && length>=c && length<=d){
//             cout<<sex1<<" "<<age<<" "<<length<<endl;
//         }
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         for(int i=1;i<=n;i++){
//             cout<<n-i+1<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     while(cin>>n){
//         if(n==0) return 0;
//         for(int i=0;i<n;i++){
//             for(int j=0;j<n;j++){
//                 cout << abs(i-j)+1 << " ";
//             }
//             cout<<endl;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         long long n,a[100009],sum=0;
//         cin>>n;
//         for(int i=0;i<n;i++){
//             cin>>a[i];
//             sum+=a[i];
//         }
//         sort(a,a+n);
//         if(sum==0) cout<<0<<endl;
//         else if(sum>2*a[n-1]) cout<<1<<endl;
//         else cout<<2*a[n-1]-sum<<endl;
//     }
//     return 0;
// }






// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// 	char a[50];
// 	scanf("%s",a);
//     int len=strlen(a);
// 		if((a[len-1]=='y'&&a[len-2]=='l') || (a[len-1]=='r'&&a[len-2]=='e')){
// 			for(int j=0;j<strlen(a)-2;j++){
// 				cout<<a[j];
// 			}
// 		}
// 		else if(a[len-1]=='g'&&a[len-2]=='n'&&a[len-3]=='i'){
//             for(int j=0;j<strlen(a)-3;j++){
//                 cout<<a[j];
//             }
// 	    }
// 		else {
// 			for(int j=0;j<strlen(a);j++){
// 			    cout<<a[j];
// 			}
// 		}
// 	return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;
// void MoveElements(int a[], int n, int k){
// 	for (int i = 0; i < k; i++)
// 	{
// 		int m = k - 1 - i;
// 		int j = m + 1;
// 		while (j < n - i)
// 		{
// 			a[m] += a[j];
// 			a[j] = a[m] - a[j];
// 			a[m] -= a[j];
// 			m++;
// 			j++;
// 		}
// 	}
// }
// int main(){
// 	int t;
// 	cin>>t;
// 	while(t--){
// 		int n,m,b[200009];
// 		int a[200009];
// 		cin>>n;
// 		for(int i=0;i<n;i++){
// 			cin>>a[i];
// 		}
// 		cin>>m;
// 		for(int i=0;i<m;i++){
// 			cin>>b[i];
// 		}

// 		for(int i=0;i<m;i++){
// 			MoveElements(a,n,b[i]);
// 			// for(int i=1;i<=n;i++) cout<<a[i]<<" ";
// 			// cout<<endl<<endl;
// 		}
// 		// for(int i=1;i<=n;i++) cout<<a[i]<<" ";
// 		// cout<<endl<<endl;
// 		cout<<a[0]<<endl;
// 	}
// 	return 0;
// }

