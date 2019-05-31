#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i, k, n) for(int i = k; i < (int)(n); i++)
typedef long long ll;

#define vi vector<int>
#define pb push_back

ll gcd(ll a ,ll b){
    if(a < b) return gcd(b, a);
  ll r;
  while ((r = a%b)) {
    a = b;
    b = r;
  }
  return b;
}
ll lcm(ll a, ll b){
    return a/gcd(a,b)*b;
}

int main() {
    ll n,t,ans;
    cin >> n;
    cin >> ans;
    rep(i,n-1){
        cin >> t;
        ans = lcm(ans,t);
    }
    cout << ans << endl;
    return 0;
}