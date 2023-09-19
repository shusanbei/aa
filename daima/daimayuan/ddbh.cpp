#include <bits/stdc++.h>
 
using namespace std;
 
typedef pair<int, int> pii;
typedef long long ll;
typedef vector<int> vi;
//#define int long long
#define fir first
#define sec second
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)x.size()
#define rep(i, l, r) for (int i = l; i <= r; ++i)
#define repd(i, l, r) for (int i = l; i >= r; --i)
#define pb push_back
 
 
set<pair<int,int> >se;
 
void myinsert(int l,int r)
{
    if(r<l)return;
    se.insert({r,l});
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    se.insert({2e9,1});
    rep(i,1,n)
    {
        int x;
        cin>>x;
        auto it=se.lower_bound({x,0});
        if(it->sec <=x)
        {
            cout<<x<<" ";
            myinsert(it->sec,x-1);
            myinsert(x+1,it->fir);
            se.erase(it);
        }
        else
        {
            cout<<it->sec<<" ";
            myinsert(it->sec+1,it->fir);
            se.erase(it);
        }
    }
    return 0;
}