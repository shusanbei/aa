#include <stdio.h>
int main(){
    int x,n,sum=0;
    scanf("%d %d",&x,&n);
    for(int i=0;i<n;i++){
    	if(x!=6&&x!=7){
    		sum+=250;
    	}else if(x==7){
    		x=0;
    	}
    	x++;
    }
    printf("%d",sum);
    return 0;
}