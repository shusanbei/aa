#include<bits/stdc++.h>
using namespace std;
struct stu
{
    int yw,sx,yy,zf,xh;
}s[310];

bool cmp(stu x,stu y){
    if(x.zf==y.zf){
        if(x.yw==y.yw) return x.xh<y.xh;
        return x.yw>y.yw;
    }
    return x.zf>y.zf;
}

int n;
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s[i].yw>>s[i].sx>>s[i].yy;
        s[i].xh=i+1;
        s[i].zf=s[i].yw+s[i].sx+s[i].yy;
    }
    sort(s,s+n,cmp);
    for(int i=0;i<5;i++){
        cout<<s[i].xh<<" "<<s[i].zf<<endl;
    }
    return 0;
}