#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i, k, n) for(int i = k; i < (int)(n); i++)

using ll = long long;

int main() {
    int d;
    cin >> d;
    cout << "Christmas";
    rep(i, 25 - d) cout << " Eve";
    cout << endl;
    return 0;
}