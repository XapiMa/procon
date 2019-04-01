#include <iostream>
#include <vector>
#include <map>
#include <cmath>
#include <cstdio>
typedef long long ll;
#define rep(i,N) for (int i = 0; i < (int)(N); i++)
#define dump(x) cerr <<#x << "=" << x << endl
using namespace std;

vector<int> divisor(int n);
map<int, int> prime_factor(int n);
ll sum_i(int n,int k);
ll sum_all(int mx, int d);
const int MOD = 1e9 + 7;
double solve();

int main(){
    int N,K; cin >> N >> K;
    vector<int> d = divisor(K);
    // rep(i,d.size()) dump(d[i]);
    ll ans = 0;
    rep(i,d.size()){
        ans += (sum_i(N / d[i],d[i],K) * K) % MOD;
        ans %= MOD;
    }
    cout << ans << endl;
    return 0;
}

ll sum_i(int n, int k,int K){
    dump(k);
    map<int,int> mpk = prime_factor(k);
    map<int,int> mpK = prime_factor(K);
    // for(auto itr = mp.begin(); itr != mp.end(); itr++) dump(itr->first);
    int mp_size = mpK.size();
    ll sum = 0;
    // ll sum = sum_all(n,1);
    for (int i = 0; i < 1 << mp_size; ++i) {
        int q = 1;
        int t = 0;
        int j = 0;
        for(auto itr = mp.begin(); itr != mp.end(); j++,itr++) {
            if(i >> j & 1) {
                q *= itr->first;
                t++;
            }
        }
        int op = -1;
        if(t % 2 == 0) op = 1;
        sum += op * sum_all(n,q);
    }
    return sum;
}


ll sum_all(int mx, int d){
    int n = mx / d;
    return (d + n * d) * n / 2;
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
