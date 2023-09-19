#include<bits/stdc++.h>
using namespace std;

int n,m,l[100009];

bool can(double x){
    int re=0;
    for(int i=0;i<n;i++){
        re += l[i]/x;
        if(re>=m) return true;
    }
    return false;
}
int main(){
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>l[i];
    }
    double l=0,r=1e9;
    while (r-l>1e-4)
    {
        double m=(l+r)/2;
        if(can(m)) l=m;
        else r=m; 
    }
    printf("%.2lf",r);
    return 0;
}