#include<bits/stdc++.h>
using namespace std;
struct s
{
    string a;
    int ans;
}arr[210];
struct mzfs
{
    string x;
    int y;
}arr1[210];
struct idmcjg
{
    string q;
    string w;
    string e;
}arr2[210];
int main()
{
    int n,m,k;
    scanf("%d%d%d",&n,&m,&k);
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i].a;
    }
    for(int i=0;i<m;i++)
    {
        cin>>arr1[i].x>>arr1[i].y;
    }
    for(int i=0;i<k;i++)
    {
        cin>>arr2[i].q>>arr2[i].w>>arr2[i].e;
    }
    for(int i=0;i<k;i++)
    {
        for(int j=0;j<n;j++)
        {
            for(int l=0;l<m;l++)
            {
                if(arr2[i].q==arr[j].a&&arr2[i].w==arr1[l].x&&arr2[i].e=="AC")
                {
                    arr[j].ans+=arr1[l].y;
                }
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i].a<<" "<<arr[i].ans<<endl;
    }
    return 0;
}