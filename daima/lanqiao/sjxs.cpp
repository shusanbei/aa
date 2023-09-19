#include<bits/stdc++.h>
using namespace std;
long long n,x,y,z;
int main(){
    cin>>n;
    n=n/1000;
    x=n/3600%24;
    y=n%3600/60;
    z=n%3600%60;
    if(x<10&&y<10&&z<10) {cout<<"0"<<x<<":0"<<y<<":0"<<z;return 0;}
    else if(x<10&&y<10) {cout<<"0"<<x<<":0"<<y<<":"<<z;return 0;}
    else if(x<10&&z<10) {cout<<"0"<<x<<":"<<y<<":0"<<z;return 0;}
    else if(y<10&&z<10) {cout<<x<<":0"<<y<<":0"<<z;return 0;}
    else if(x<10) {cout<<"0"<<x<<":"<<y<<":"<<z;return 0;}
    else if(y<10) {cout<<x<<":0"<<y<<":"<<z;return 0;}
    else if(z<10) {cout<<x<<":"<<y<<":0"<<z;return 0;}
    return 0;
}