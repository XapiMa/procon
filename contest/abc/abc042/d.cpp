#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define REP(i,k,n) for(int i = k; i < (int)(n); i++)
typedef long long ll;

ll const MOD = 1e9+7;

ll f[200010];

void fuct_mod(){
        f[0] = 1;
        for(ll i = 1; i < 200010; i++) {
                f[i] = f[i-1] * i % MOD;
        }
}

int main(){
        ll H,W,A,B;
        cin >> H >> W >> A >> B;
        ll ans = 0;
        ll lastLeftPath = 0;
        fuct_mod();
        for(ll leftH = 0; leftH < H - A; leftH++) {
                ll leftW = B;
                ll left = f[leftH+leftW]/(f[leftH]*f[leftW]) - lastLeftPath;
                lastLeftPath += f[leftH+leftW]/(f[leftH]*f[leftW]);
                ll rightH = H - leftH - 1;
                ll rightW = W - B - 1;
                ll right = f[rightH+rightW]/(f[rightH]*f[rightW]);
                ans += left * right % MOD;
                ans %= MOD;
        }
        cout << ans << endl;
        return 0;
}
