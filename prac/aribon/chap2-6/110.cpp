#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <map>
#include <vector>
using namespace std;
#define rep(i,N) for (int i = 0; i < (int)(N); i++)

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



int main(){
    int n; cin >> n;
    string ans = "No";
    if(is_prime(n)) ans = "Yes";
    cout << ans << endl;
    return 0;
}
