#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,N) for (int i = 0; i < (int)(N); i++)
#define dump(x) cerr <<#x << "=" << x << endl

// ユークリッドの互除法
// 最大公約数
int gcd(int a, int b){
    if(b == 0) return a;
    return gcd(b,a % b);
}

int gcd(int a, int b){
    return b ? gcd(b,a % b) : a;
}

// 拡張ユークリッドの互除法
int extgcd(int a, int b, int &x, int &y){
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }
    int d = extgcd(b, a % b, y, x);
    y -= a / b * x;
    return d;
}


// 最小公倍数
// a * b = lcm * gcd
int lcm(int a, int b) {
    // return a * b / gcd(a, b);
    return a / gcd(a, b) * b;
}


// 負の数にも対応した mod
int mod_negative(int a, int m) {
    return (a % m + m) % m;
}
// 逆元計算 (a と m が互いに素である場合)
// ax = 1 mod m の x が逆元
int modinv(int a, int m) {
    int x, y;
    extgcd(a, m, x, y);
    return mod_negative(x, m); // xを正にするため
}


// 素数判定
bool is_prime(int n){
    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0) return false;
    }
    return n != 1;
}

// 約数を列挙
vector<int> divisor(int n){
    vector<int> res;
    for(int i = 1; i * i <= n; i++) {
        if(n % i == 0) {
            res.push_back(i);
            // 約数ペアの片方がnなら，他方はn/i
            // 平方数で重複して数えないように
            if(i != n / i) res.push_back(n / i);
        }
    }
    return res;
}

// 素因数分解
map<int, int> prime_factor(int n){
    map<int, int> res;
    for(int i = 2; i * i <= n; i++) {
        while(n % i == 0) {
            ++res[i];
            n /= i;
        }
    }
    if(n != 1) res[n] = 1;
    return res;
}

// 素因数分解
vector<int> factorize(int n){
    vector<int> v;
    for(int i = 2; i * i <= n; i++) {
        while(n % i == 0) {
            v.push_back(i);
            n /= i;
        }
    }
    if(n != 1) v.push_back(i);
    return v;
}

// エラトステネスのふるい
const int MAX_N = 1000000;
int prime[MAX_N];
bool is_prime[MAX_N + 1];
int sieve(int n){
    int p = 0;
    rep(i,n + 1) is_prime[i] = true;
    is_prime[0] = is_prime[1] = false;
    for(int i = 2; i <= n; i++) {
        if(is_prime[i]) {
            prime[p++] = i;
            for(int j = 2 * i; j <= n; j += i) is_prime[j] = false;
        }
    }
    return p;
}

// 区間ふるい
// 大きな数a,bに対して普通にふるいにかけるとメモリが不足する
// a<b<=10^12  b-a<=10^6 にも対応できる
const ll MAXN = 1001024; // b-a < MAXN, sqrt(b) < MAXN
ll prime[MAXN]; // [a,b) の素数のうち i 番目の素数
bool is_prime[MAXN]; // 整数 i が素数であるかどうか
bool is_prime_ab[MAXN]; // 整数 i+a が素数であるかどうか
ll segment_sieve(ll a, ll b){
    fill(is_prime, is_prime + MAXN, true);
    fill(is_prime_ab, is_prime_ab + MAXN, true);

    for(ll i = 2; i * i < b; i++) {
        if(!is_prime[i]) continue;
        for(ll j = 2 * i; j * j < b; j += i) is_prime[j] = false;
        for(ll j = a - a % i; j < b; j += i) {
            if(j < a) continue;
            if(is_prime_ab[j - a]) is_prime_ab[j - a] = false; // 素数 i で篩にかける
        }
    }
    ll res = 0;
    for(ll i = a; i < b; ++i) if(is_prime_ab[i - a]) prime[res++] = i;
    return res;
}


// 繰り返し2乗法（高速累乗）
ll mod_pow(ll x, ll n, ll mod){
    ll res = 1;
    while(n > 0) {
        if(n & 1) res = res * x % mod;
        x = x * x % mod;
        n >>= 1;
    }
    return res;
}

// 繰り返し2乗法（高速累乗）
ll mod_pow_rec(ll x,ll n, ll mod){
    if(n == 0) return 1;
    ll res = mod_pow_rec(x * x % mod, n / 2, mod);
    if(n & 1) res = res * x % mod;
    return res;
}

// 繰り返し2乗法（高速累乗）
ll mod_pow_rec2(ll x, ll n, ll m){
    if(n == 0)
        return 1;
    if(n & 1)
        return mod_pow_rec2(x * x % m, n / 2, m);
    else
        return x * mod_pow_rec2(x, n - 1, m) % m;
}


// 組み合わせ数
void comb(vector<vector <ll> > &v){
    for(int i = 0; i < v.size(); i++) {
        v[i][0] = 1;
        v[i][i] = 1;
    }
    for(int k = 1; k < v.size(); k++) {
        for(int j = 1; j < k; j++) {
            v[k][j] = (v[k - 1][j - 1] + v[k - 1][j]);
        }
    }
}
// 利用時
//  vector<vector<ll> > v(MAX_N + 1,vector<ll>(MAX_N + 1,0));
//  comb_p(v);
//  nCk == v[n][k]

// 組み合わせの確率
void comb_p(vector<vector <double> > &v){
    v[0][0] = 1.0;
    for(int i = 1; i < v.size(); i++) {
        v[i][0] = v[i - 1][0] / 2;
        v[i][i] = v[i - 1][i - 1] / 2;
    }
    for(int k = 1; k < v.size(); k++) {
        for(int j = 1; j < k; j++) {
            v[k][j] = (v[k - 1][j - 1] / 2 + v[k - 1][j] / 2);
        }
    }
}
// 利用時
// vector<vector<double> > v(MAX_N + 1,vector<double>(MAX_N + 1,0));
// comb_p(v);
// P(nCk) = v[n][k];
