#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    for(int i=0;i<(int)a.length();i++)
    {
        if(a[i]<='z' && a[i]>='a')
        {
            a[i]=a[i]-32);
        }
    }
    cout<<a;
    return 0;
}