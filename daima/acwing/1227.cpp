#include<bits/stdc++.h>
using namespace std;
long long n,k,a[100009],b[100009];
bool is(int x){
    long long re=0;
    for(int i=0;i<n;i++){
        re += (a[i]/x)*(b[i]/x);
        if(re>=k) return true;
    }
    return false;
}
int main(){
    cin>>n>>k;
    for(int i=0;i<n;i++)
     cin>>a[i]>>b[i];
    int l=1,r=1e5;
    while(l<r){
        int m=(l+r+1)>>1;
        if(is(m)) l=m;
        else r=m-1;
    }
    cout<<l;
    return 0;
}