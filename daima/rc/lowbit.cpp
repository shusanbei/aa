#include<iostream>
using namespace std;
 
int lowbit(int x)
{
    return x&-x;
}
 
int main()
{
        int res=0;
        int x;
        cin>>x;
        cout<<lowbit(x);
        int y=lowbit(x);
        while(y)
        {
            y=y/2;
            res++;
        }
        cout<<" "<<res;
    return 0;
}