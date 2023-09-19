#include<bits/stdc++.h>
using namespace std;
//大整数除以小整数,余数为r
vector<int> div(vector<int> &A,int b,int &r){//传入的是余数的地址
    vector<int> C;//商
    r=0;//余数
    for(int i=A.size()-1;i>=0;i--){
        r=r*10+A[i];
        C.push_back(r/b);
        r%=b;
    }
    reverse(C.begin(),C.end());
    while(C.size()>1&&C.back()==0) C.pop_back();  //去掉前导0
    return C;
}
int main(){
    string a;
    int b,r;
    vector<int> A;
    cin>>a>>b;
    for(int i=a.size()-1;i>=0;i--) A.push_back(a[i]-'0');
    
    auto C=div(A,b,r);
    for(int i=C.size()-1;i>=0;i--) cout<<C[i];
    cout<<endl<<r;
    return 0;
}