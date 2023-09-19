// Skyqwq
#include <bits/stdc++.h>

#define pb push_back
#define fi first
#define se second
#define mp make_pair

using namespace std;

typedef pair<int, int> PII;
typedef long long LL;

template <typename T> bool chkMax(T &x, T y) { return (y > x) ? x = y, 1 : 0; }
template <typename T> bool chkMin(T &x, T y) { return (y < x) ? x = y, 1 : 0; }

template <typename T> void inline read(T &x) {
    int f = 1; x = 0; char s = getchar();
    while (s < '0' || s > '9') { if (s == '-') f = -1; s = getchar(); }
    while (s <= '9' && s >= '0') x = x * 10 + (s ^ 48), s = getchar();
    x *= f;
}

const int N = 2e5 + 5;

int n, m, L[2], R[2];

int main() {
    R[0] = R[1] = 2e9;
    read(n);
    for (int i = 1; i <= n; i++) {
        int l, r; read(l), read(r);
        chkMin(R[0], r);
        chkMax(L[0], l);
    }
    read(m);
    for (int i = 1; i <= m; i++) {
        int l, r; read(l), read(r);
        chkMin(R[1], r);
        chkMax(L[1], l);
    }
    int ans = 0;
    cout<<L[0]<<" "<<R[0]<<" "<<L[1]<<" "<<R[1]<<endl;
    chkMax(ans, L[1] - R[0]);
    cout<<ans<<endl;
    chkMax(ans, L[0] - R[1]);
    printf("%d\n", ans);
    return 0;
}