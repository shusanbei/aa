//A
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// 	int t;
// 	cin>>t;
// 	while(t--){
// 		int x,y,ma=-1,mb=-1,a,b;
// 		cin>>x;
// 		for(int i=0;i<x;i++) {
// 			cin>>a;
// 			ma=max(ma,a);
// 		}
// 		cin>>y;
// 		for(int i=0;i<y;i++){
// 			cin>>b;
// 			mb=max(mb,b);
// 		}
// 		if(ma>=mb){
// 			cout<<"Alice"<<endl;
// 		}
// 		else{
// 			cout<<"Bob"<<endl;
// 		}

// 		if(ma<=mb){
// 			cout<<"Bob"<<endl;
// 		}
// 		else{
// 			cout<<"Alice"<<endl;
// 		}
// 	}
// 	return 0;
// }

//B
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         long long n,m,a[200009],b[200009],sum=0;
//         cin>>n;
//         for(int i=0;i<n;i++){
//             cin>>a[i];
//         }
//         cin>>m;
//         for(int i=0;i<m;i++){
//             cin>>b[i];
//             sum+=b[i]%n;
//             sum%=n;
//         }
//         cout<<a[sum%n]<<endl;
//     }
//     return 0;
// }

//C
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n,a[110],b[110];
//         cin>>n;
//         for(int i=0;i<n;i++) cin>>a[i];
//         for(int i=0;i<n;i++) cin>>b[i];

//         vector<pair<int,int>> ans;
//         for(int i=0;i<n-1;i++){
//             for(int j=i+1;j<n;j++){
//                 if(a[i]>a[j] || b[i]>b[j]){
//                     swap(a[i],a[j]);
//                     swap(b[i],b[j]);
//                     ans.push_back({i,j});
//                 }
//             }
//         }
//         bool flag=false;
//         for(int i=0;i<n-1;i++){
//             if(a[i]>a[i+1] || b[i]>b[i+1]){
//                 flag=true;
//             }
//         }
//         if(flag) cout<<-1<<endl;
//         else{
//             cout<<ans.size()<<endl;
//             for(int i=0;i<ans.size();i++){
//                 cout<<ans[i].first+1<<" "<<ans[i].second+1<<endl;
//             }
//         }
//     }
//     return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n,x;
//     cin>>n>>x;
//     return 0;
// }


#include <stdio.h>
int _binarysearch(int a[],int n,int target,int f) //升序序列
{
    int low = 0;
    int high = n-1;
    int mid=(low+high)/2;
    while (low<=high) {
        mid = (low+high)/2;
        if((target<=a[mid]&&f==0)||(target>=a[mid]&&f==1))
        {
            printf("456546546546\t");
            high = mid-1;
        }else
        {
            low = mid+1;
        }
    }
    return low;
}
int main()
{
    int a[1000];
    int num, target;
    scanf("%d", &num);
    for (int i = 0; i < num; i++) {
        scanf("%d", &a[i]);
    }
    scanf("%d", &target);
    printf("%d",_binarysearch(a, num, target, 0)-1);
}