#include<bits/stdc++.h>
using namespace std;
vector<int> add(vector<int> &x,vector<int> &y){
    vector<int> z;
    if(x.size()<y.size()) return add(y,x);
    int t=0;
    for(int i=0; i<(int)x.size() || i<(int)y.size() ;i++){
        t+=x[i];
        if(i<(int)y.size()) t+=y[i];
        z.push_back(t%10);
        t/=10; 
    }
    if(t) z.push_back(1);
    return z;
}
int main(){
    vector<int> x,y;
    string a,b;
    cin>>a>>b;
    for(int i=a.size()-1;i>=0;i--) x.push_back(a[i]-'0');
    for(int i=b.size()-1;i>=0;i--) y.push_back(b[i]-'0');

    auto z=add(x,y);

    for(int i=z.size()-1;i>=0;i--) printf("%d",z[i]);
    return 0;
}