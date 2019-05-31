#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i, k, n) for(int i = k; i < (int)(n); i++)

using ll = long long;

int main() {
    int n, k;
    vector<int> h;
    cin >> n >> k;
    rep(i, n) {
        int tmp;
        cin >> tmp;
        h.push_back(tmp);
    }
    sort(h.begin(), h.end());
    vector<int> diffs;
    rep(i, h.size() - (k - 1)) { diffs.push_back(h[i + k - 1] - h[i]); }
    cout << *min_element(diffs.begin(), diffs.end()) << endl;

    return 0;
}