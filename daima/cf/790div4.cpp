#include<bits/stdc++.h>
using namespace std;
double a[110][110],b[110];
int main(){
	int m,n,max=0,min=1e9,sum=0;
    double sum1=0;
	cin>>n>>m;
	for(int i=0;i<n;i++){
        max=0,min=1e9,sum=0;
		for(int j=0;j<m;j++){
			cin>>a[i][j];
			if(a[i][j]>=max) max=a[i][j];
			if(a[i][j]<=min) min=a[i][j];
			sum=sum+a[i][j];
		}
		b[i]=(sum-max-min)*1.0/(m-2);
	}
	for(int i=0;i<n;i++){
		if(b[i]>=sum1) sum1=b[i];
	}
	printf("%.2lf",sum1);
	return 0;
}
