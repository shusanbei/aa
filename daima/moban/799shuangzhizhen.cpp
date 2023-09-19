#include<bits/stdc++.h>
using namespace std;
int n,a[100009],b[100009],maxx=-1;
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0,j=0;i<n;i++){
        b[a[i]]++;
        while(b[a[i]]>1){
            b[a[j++]]--;
        }
        maxx=max(maxx,i-j+1);
    }
    cout<<maxx;
    return 0;
}