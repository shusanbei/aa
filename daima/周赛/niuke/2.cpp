// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n,x,y,z=2;
//     scanf("%d",&n);
//     int ans=999;
//     for(int i=0;i<n;i++)
//     {
//         scanf("%d %d",&x,&y);
//         for(int j=0;;j++)
//         {
//             if(z>=x && z<=y)
//             {
//                 ans=0;
//                 printf("%d\n",z);
//                 break;
//             }
//             if(z>y)
//             {
//                 break;
//             }
//             z=z*2;
//         }
//         if(ans!=0) printf("-1\n");
//         ans=999;
//         z=2;
//     }
//     return 0;
// }

#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
const int N = 1e6+10;
int a[N],b[N],c[N],n,s=0;
int main()
{
    cin >> n;
    for(int i = 0;i <= 50;i++)
    c[i] = pow(2,i);
    for(int i = 1;i <= n;i++)
    cin >> a[i] >> b[i];
    for(int i = 1;i <= n;i++)
    {
    	s=0;
        for(int k = 0;k <= 50;k++)
        {
        	s++;
        	if(c[k] >= a[i] && c[k] <= b[i])
        	{
        	cout << c[k] <<endl;
        	break;
            }
            else if(s == 50)
            cout << -1 <<endl;
		}
	}
	return 0;
}
