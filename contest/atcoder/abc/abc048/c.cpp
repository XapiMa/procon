#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define REP(i,k,n) for(int i = k; i < (int)(n); i++)
typedef long long ll;

int main(){
        ll N,x;
        ll first,second;
        ll ans = 0;
        cin >> N >> x;
        cin >> first;
        if (first > x) {
                ans += first - x;
                first = x;
        }
        for(ll i = 1; i < N; i++) {
                cin >> second;
                ll diff = first + second - x;
                if (diff > 0) {
                        first = second - diff;
                        ans += diff;
                }
        }
        cout << ans << endl;
        return 0;
}
