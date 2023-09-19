#include<bits/stdc++.h>
using namespace std;
int lowbit(int x){ //返回最后一个1的位置
    return x&(-x);
}
int main(){
    int n;
    cin>>n;
    while(n--){
        int x;
        cin>>x;
        int res=0;
        while(x) x-=lowbit(x),res++; //每次减去最后的一个1

        // while(x) {
        //     if((x&1)==1){  //求x最后的一位是不是1
        //         res++;
        //     }
        //     x=x>>1;  每次后移一位
        // }

        cout<<res<<' ';
    }
    return 0;
}