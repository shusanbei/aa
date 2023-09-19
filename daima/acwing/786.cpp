#include<bits/stdc++.h>
using namespace std;
void qsort(int ar[],int l,int r){
    if(l>=r) return;

    int x=ar[(l+r)>>1],i=l-1,j=r+1;
    while(){
        do i++; while(ar[i]<x);
        do j--; while(ar[j]>x);
        
    }
}
int n,k,ar[100009];
int main(){
    cin>>n>>k;
    for(int i=0;i<n;i++) cin>>ar[i];
    sort(ar,ar+n);
    cout<<ar[k-1]<<endl;
    return 0;
}