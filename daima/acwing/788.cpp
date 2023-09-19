//逆序对有三种：
//两个元素都在左边；
//两个元素都在右边；
//两个元素一个在左一个在右；
//然后分治处理（三种情况）最后把他们加起来
#include<bits/stdc++.h>
using namespace std;
int n,a[10000009],tem[10000009];
long long ans=0;
void getshu(int a[],int l,int r){
	if(l>=r) return;
	int m=(l+r)>>1;

	getshu(a,l,m);
	getshu(a,m+1,r);

	int k=0,i=l,j=m+1;
	while(i<=m&&j<=r)
		if(a[i]<=a[j]) tem[k++]=a[i++];
		else tem[k++]=a[j++],ans+=m-i+1;
	
	while(i<=m) tem[k++]=a[i++];
	while(j<=r) tem[k++]=a[j++];
	for(int i=l,j=0;i<=r;i++,j++) a[i]=tem[j];
}

int main(){
	cin>>n;
	for(int i=0;i<n;i++) cin>>a[i];
	getshu(a,0,n-1);
	cout<<ans;
	return 0;
}