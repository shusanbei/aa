#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,a[100009];
    cin>>n>>m;
    for(int i=0;i<n;i++)
     cin>>a[i];
    sort(a,a+n);
    int x=0,y=n-1;
    while (x<y)
    {
        if(a[x]+a[y]==m){
            cout<<a[x]<<" "<<a[y];
            return 0;
        }
        if(a[x]+a[y]<m){
            x++;
        }
        if(a[x]+a[y]>m){
            y--;
        }
    }
    cout<<"No Solution";
    return 0;
}