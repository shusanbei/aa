#include <bits/stdc++.h>
using namespace std;
int a[110][110] = {0}; 
int main()
{
    int m, n, j, k;
    cin >> m >> n;
    int x = 0, y = 0, i = 1;
    a[0][0] = 1;
    while(i<m*n)
    {
        while(y+1<n && !a[x][y+1]) {y++; a[x][y]=++i;} 
        while(x+1<m && !a[x+1][y]) {x++; a[x][y]=++i;}
        while(y-1>=0 && !a[x][y-1]) {y--; a[x][y]=++i;}
        while(x-1>=0 && !a[x-1][y]) {x--; a[x][y]=++i;}
    }
    for(j=0;j<m;j++) 
    {
        for(k=0;k<n;k++)
            printf("%d ", a[j][k]);
        printf("\n");
    }

    return 0;
}