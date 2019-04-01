#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <map>
#include <vector>
using namespace std;
typedef long long ll;
#define rep(i,N) for (int i = 0; i < (int)(N); i++)


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



int main(){
    ll a,b; cin >> a >> b;

    cout << segment_sieve(a,b) << endl;
    return 0;
}
