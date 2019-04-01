#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define REP(i,k,n) for(int i = k; i < (int)(n); i++)
typedef long long ll;

int main(){
        int n;
        ll t[1010],a[1010];
        ll tsum,asum;
        cin >> n;
        rep(i,n) cin >> t[i] >> a[i];
        tsum = t[0]; asum = a[0];
        for(int i = 1; i < n; i++) {
                ll coefficient = (ll)max(ceil((long double)tsum/t[i]),ceil((long double)asum/a[i]));
                tsum = t[i] * coefficient;
                asum = a[i] * coefficient;
        }
        cout << tsum + asum << endl;
        return 0;
}
