#include<bits/stdc++.h>
using namespace std;
int n,m,a[1000009],b;

int ef(int l, int r)
{
    while (l < r)
    {
        int m = (l + r) >> 1;
        if (a[m] >= b) r = m;
        else l = m + 1;
    }
    if(a[l]==b) return l;
    else return -1;
}

int main(){
    cin>>n>>m;
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=m;i++){
        cin>>b;
        cout<<ef(1,n)<<" ";
    }
    return 0;
}