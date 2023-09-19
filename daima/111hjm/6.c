#include<stdio.h>
int fact(int n){
    int re=1;
    for(int i=1;i<=n;i++){
        re*=i;
    }
    return re;
}
int main(){
    int m,k,p;
    scanf("%d%d",&m,&k);
    if(m>k){
        p=fact(k)/fact(m-k);
        printf("%d",p);
    }
    return 0;
}