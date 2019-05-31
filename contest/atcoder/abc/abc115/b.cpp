#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i, k, n) for(int i = k; i < (int)(n); i++)

using ll = long long;

int main() {
    int n;
    cin >> n;
    int p[10010] = {};
    int sum = 0;
    rep(i, n) {
        cin >> p[i];
        sum += p[i];
    }
    cout << sum - *max_element(p, p + 10010) / 2 << endl;
}
