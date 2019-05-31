#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i, k, n) for(int i = k; i < (int)(n); i++)
const int maxN = int(1e5 + 10);
int e[maxN] = {}, o[maxN] = {};
int num[maxN] = {};
using ll = long long;

int main() {
    int n, t, a;
    cin >> n >> t >> a;
    double diff, ans;
    int h[1010];
    rep(i, n) cin >> h[i];
    diff = abs(a - (t - h[0] * 0.006));
    ans = 1;
    rep(i, n) {
        double tdiff = abs(a - (t - h[i] * 0.006));
        if(tdiff < diff) {
            diff = tdiff;
            ans = i + 1;
        }
    }
    cout << ans << endl;

    return 0;
}