#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define REP(i,k,n) for(int i = k; i < (int)(n); i++)
typedef long long ll;

int main(){

    ll a,b,x;
    cin >> a >> b >> x;
    ll ans = b / x - a / x;
    if(a % x == 0) ans += 1;
    cout << ans << endl;

    return 0;
}
