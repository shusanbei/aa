#include<iostream>
using namespace std;

class Rational{
    public:
        friend void pri(Rational n){
            cout<<n.fz<<"/"<<n.fm<<endl;
        }
        friend Rational add(Rational a,Rational b);
        friend Rational sub(Rational a,Rational b);
        friend Rational mul(Rational a,Rational b);
        friend Rational div(Rational a,Rational b);
        Rational(){
            fz=0,fm=0;
        }
        Rational(int x,int y);
    private:
        int fz,fm;
};

Rational::Rational(int x,int y){
    fz=x;
    fm=y;
}
// void pri(Rational n){
//     cout<<n.fz<<"/"<<n.fm<<endl;
// }
Rational add(Rational a,Rational b){
    Rational c;
    a.fz=a.fz*b.fm+b.fz*a.fm;
    c.fm=a.fm*b.fm;
    return c;
}
Rational sub(Rational a,Rational b){
    Rational c;
    c.fz=a.fz*b.fm-b.fz*a.fm;
    c.fm=a.fm*b.fm;
    return c;
}
Rational mul(Rational a,Rational b){
    Rational c;
    c.fz=a.fz*b.fz;
    c.fm=a.fm*b.fm;
    return c;
}
Rational div(Rational a,Rational b){
    Rational c;
    c.fz=a.fz*b.fm;
    c.fm=a.fm*b.fz;
    return c;
}
int main(){
    Rational a(1,2);
    Rational b(1,1);
    pri(a);
    pri(b);
    // Rational c;
    // c=//加
    cout<<"输出结果为：";
    pri(add(a,b));
    // c=sub(a,b);//减
    // cout<<"输出结果为：";
    // pri(c);
    // c=mul(a,b);//乘
    // cout<<"输出结果为：";
    // pri(c);
    // c=div(a,b);//除
    // cout<<"输出结果为：";
    // pri(c);
    return 0;
}



// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     double a[10],sum=0;
//     for(int i=0;i<5;i++){
//         cin>>a[i];
//         sum+=a[i];
//     }
//     sum=sum/5;
//     double ans=0;
//     for(int i=0;i<5;i++){
//         ans+=(a[i]-sum)*(a[i]-sum);
//     }
//     ans=sqrt(ans/20);
//     cout<<"sum::"<<sum<<endl;
//     cout<<"ans::"<<ans<<endl;
//     return 0;
// }


void setxu fushu(int xu){
    xu=xu;
}
void getxu fushu(){
    return xu;
}
void pri(){
    cout<<"实部："<<shi<<"虚部："<<xu<<"i";
}