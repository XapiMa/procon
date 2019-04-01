#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <map>
#include <vector>
using namespace std;
typedef long long ll;
#define rep(i,N) for (int i = 0; i < (int)(N); i++)

ll gcd(ll a, ll b){
    return b ? gcd(b,a % b) : a;
}

// 拡張ユークリッドの互除法
ll extgcd(ll a, ll b, ll &x, ll &y){
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }
    ll d = extgcd(b, a % b, y, x);
    y -= a / b * x;
    return d;
}

// 負の数にも対応した mod
ll mod(ll a, ll m) {
    return (a % m + m) % m;
}

// 逆元計算 (a と m が互いに素である場合)
ll modinv(ll a, ll m) {
    ll x, y;
    extgcd(a, m, x, y);
    // return mod(x, m); // xが負かもしれないので
    return x; // xが負かもしれないので
}

int main() {
    // 計算例 (3 * 5 ≡ 1 (mod. 7) より 5)
    cout << modinv(3, 7) << endl;
    return 0;
}
