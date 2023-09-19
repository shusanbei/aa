#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int a,b,tema1[100]={0},tema2[100]={0},temb1={0},temb2={0};
        cin>>a>>b;
        string s1,s2;
        cin>>s1>>s2;
        for(int i=0;i<a;i++){
            if(s1[i]=='1') tema1++;
            else temb1++;
        }
        for(int i=0;i<b;i++){
            if(s2[i]=='1') tema2++;
            else temb2++;
        }
    }
    return 0;
}