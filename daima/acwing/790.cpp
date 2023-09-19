#include<bits/stdc++.h>
using namespace std;
int main(){
    double n;
    scanf("%lf",&n);
    double l=-10000,r=10000,m;
    while(abs(r-l)>=1e-7){
        m=(r+l)/2.0;
        if(m*m*m>=n) r=m;
        else l=m;
    }
    printf("%.6lf",m);
    return 0;
}