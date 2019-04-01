#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <cmath>
#include <string.h>

#define rep(i,n) for(int i = 0; i < n; i++)
#define rrep(i,n) for(int i = n - 1; i >= 0; i--)
#define REP(i,k,n) for(int i = k; i < n; i++)

#define vi vector<int>
#define pb push_back
using namespace std;

const int MAX_N = 300010;
vi prime;
bool is_prime[MAX_N + 1];
void sieve(){
    memset(is_prime,false,sizeof(is_prime));
    for(int i = 1; i * 7 < MAX_N; i++) {
        int bef = i * 7 - 1;
        int aft = i * 7 + 1;
        is_prime[bef] = true;
        is_prime[aft] = true;
    }
    for(int i = 1; (i * 7) * (i * 7) <= MAX_N; i++) {
        int bef = i * 7 - 1;
        int aft = i * 7 + 1;
        if(is_prime[bef]) {
            for(int j = 2 * bef; j <= MAX_N; j += bef) is_prime[j] = false;
        }
        if(is_prime[aft]) {
            for(int j = 2 * aft; j <= MAX_N; j += aft) is_prime[j] = false;
        }
    }
    rep(i,MAX_N) if(is_prime[i]) prime.pb(i);
}

int main(){
    int n;
    sieve();
    while(cin >> n, n != 1) {
        cout << n << ":";
        rep(i,prime.size()){
            if(n % prime[i] == 0) cout << " " << prime[i];
        }
        cout << endl;
    }

    return 0;

}
