#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    int n;
    string arr[10000];
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                string x=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=x;
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
        if(i!=n) cout<<arr[i]<<" ";
        if(i==n) cout<<arr[i]; 
    }
    return 0;
}