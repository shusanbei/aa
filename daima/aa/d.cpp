#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,h=0;
    string a[1001],b[1001];
    string c[1001];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        cin>>b[i];
    }
    for(int j=0;j<=n;j++)
    {
        cin>>c[j];
        for(int i=0;i<n;i++)
        {
            if(c[j]==b[i])
            {
                h++;
                cout<<a[i]<<" ";
            }
        }
    }
    if(h==0) cout<<"-1";
    return 0;
}
