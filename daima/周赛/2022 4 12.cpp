#include<bits/stdc++.h>
using namespace std;
// typedef pair<long long,long long> pll;
// long long q,t,x,c;
// queue<pll> a;
// int main(){
//     cin>>q;
//     while(q--){
//         cin>>t;
//         if(t==1){
//             cin>>x>>c;
//             a.push({x,c});//向队列尾放入x和c
//         }
//         if(t==2){
//             cin>>c;
//             long long ans=0;
//             while(c>0){
//                 if(c<a.front().second){    //如果要拿出的c个比上次放入的c个小
//                     ans+=c*a.front().first;//那么直接乘法拿出（比一个一个快）
//                     a.front().second -= c; //清除c个
//                     c=0;
//                 }
//                 else{
//                     ans += (a.front().first)*(a.front().second);//同样乘法拿出
//                     c -= a.front().second; //清除c个
//                     a.pop();               //清空队前的
//                 }
//             }
//             cout<<ans<<"\n";
//             ans=0;
//         }
//     }
//     return 0;
// }

//见题打表SOS
int main(){
    string s[20];
    int n;
    cin>>n;
    s[1]="1";
    s[2]=s[1]+" 2 "+s[1];;
    s[3]=s[2]+" 3 "+s[2];
    s[4]=s[3]+" 4 "+s[3];
    s[5]=s[4]+" 5 "+s[4];
    s[6]=s[5]+" 6 "+s[5];
    s[7]=s[6]+" 7 "+s[6];
    s[8]=s[7]+" 8 "+s[7];
    s[9]=s[8]+" 9 "+s[8];
    s[10]=s[9]+" 10 "+s[9];
    s[11]=s[10]+" 11 "+s[10];
    s[12]=s[11]+" 12 "+s[11];
    s[13]=s[12]+" 13 "+s[12];
    s[14]=s[13]+" 14 "+s[13];
    s[15]=s[14]+" 15 "+s[14];
    s[16]=s[15]+" 16 "+s[15];
    cout<<s[n];
    return 0;
}