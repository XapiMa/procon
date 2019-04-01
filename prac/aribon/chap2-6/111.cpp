#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <map>
#include <vector>
using namespace std;
#define rep(i,N) for (int i = 0; i < (int)(N); i++)
const int MAX_N = 1000000;

// エラトステネスのふるい
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



int main(){
    int n; cin >> n;
    cout << sieve(n) << endl;
    return 0;
}
