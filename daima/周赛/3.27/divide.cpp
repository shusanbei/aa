#include<bits/stdc++.h>
using namespace std;
long long n,p,ans;
int main(){
    cin>>n>>p;
    ans=((n-1)*6)%p;
    cout<<ans;
    return 0;
}