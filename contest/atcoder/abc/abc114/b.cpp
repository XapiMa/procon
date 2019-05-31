#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i, k, n) for(int i = k; i < (int)(n); i++)

using ll = long long;

int main() {
    const int target = 753;
    string s;
    cin >> s;
    int diff = 10000;
    rep(i, s.size() - 2) {
        int num = atoi(s.substr(i, 3).c_str());
        int tdiff = abs(target - num);
        if(diff > tdiff)
            diff = tdiff;
    }
    cout << diff << endl;
    return 0;
}