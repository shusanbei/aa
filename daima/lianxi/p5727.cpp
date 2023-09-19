// #include<stdio.h>
// int main(void)
// {
//     int a[1000], m, i, j, t, k;
//     scanf("%d", &m);
//     a[0] = m;
//     for (i = 1; i < 100; i++)
//     {
//         if (m == 1)
//         {
//             k = 0;
//             break;
//         }
//         if (m % 2 != 0)
//         {
//             t = m * 3 + 1;
//             a[i] = t;
//         }
//         else
//         {
//             t = m / 2;
//             a[i] = t;
//         }
//         k = i;
//         m = t;
//         if (t == 1)
//             break;
//     }
//     for (j = k; j >= 0; j--)
//         printf("%d ", a[j]);
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a[10000],x=0;
    cin>>n;
    while(n!=1){
		a[x++]=n;
		if(n%2==0) n/=2;
		else n=3*n+1;
	}
	a[x]=1;
	for(int i=x;i>=0;i--){
		cout<<a[i]<<" ";
	}
    return 0;
}