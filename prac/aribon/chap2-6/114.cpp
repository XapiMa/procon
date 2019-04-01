#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <map>
#include <vector>
using namespace std;
typedef long long ll;
#define rep(i,N) for (int i = 0; i < (int)(N); i++)

int gcd(int a, int b){
    if(b == 0) return a;
    return gcd(b, a % b);
}

ll mod_pow(ll x, ll n, ll m){
    ll res = 1;
    while(n > 0) {
        if(n & 1) res = res * x % m;
        x = x * x % m;
        n >>= 1;
    }
    return res;
}

ll mod_pow_rec(ll x,ll n, ll m){
    if(n == 0) return 1;
    ll res = mod_pow_rec(x * x % m, n / 2, m);
    if(n & 1) res = res * x % m;
    return res;
}

ll mod_pow_rec2(ll x, ll n, ll m){
    if(n == 0)
        return 1;
    if(n & 1)
        return mod_pow_rec2(x * x % m, n / 2, m);
    else
        return x * mod_pow_rec2(x, n - 1, m) % m;
}


bool isCarmichaelNumber(int n){
    if(is_prime(n)) return false;
    for (int b = 2; b < n; b++) {
        // b,nが互いに素でなければ，bは mod nで
        if (gcd(b, n) == 1) {
            if (mod_pow(b, n - 1, n) != 1) return false;
        }
    }
    return true;

}



int main(){
    ll n; cin >> n;
    string ans = "No";
    if(isCarmichaelNumber(n)) ans = "Yes";
    cout << ans << endl;
    return 0;
}
