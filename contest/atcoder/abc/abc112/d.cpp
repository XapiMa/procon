#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i, k, n) for(int i = k; i < (int)(n); i++)
const int maxN = int(1e5 + 10);
int e[maxN] = {}, o[maxN] = {};
int num[maxN] = {};
using ll = long long;

int main() {
    ll n, m;
    ll ans = 0;
    cin >> n >> m;

    for(ll i = 1; i * i <= m; i++) {
        if(m % i == 0) {
            ll i1 = i, i2 = m / i;
            if(n * i1 <= m && ans < i1) {
                ans = i1;
            }
            if(n * i2 <= m && ans < i2) {
                ans = i2;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
