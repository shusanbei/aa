#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int N;
    cin>>N;
    int a[N],j=0,m;
    for(int i=0;i<N;i++){
        while (cin >> m) {
            a[m] ++;
        }
    }
    for(int i=0;i<j-1;i++) {
        cout<<a[i];
        cout<<"4???";
    }
    return 0;
}