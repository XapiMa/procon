#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i, k, n) for(int i = k; i < (int)(n); i++)
const int maxN = int(1e5 + 10);
int e[maxN] = {}, o[maxN] = {};
int num[maxN] = {};
using ll = long long;

using st = struct {
    int y;
    int index;
};

bool cmp(const st &a, const st &b) { return a.y < b.y; }

int main() {
    int n, m;
    const int maxN = int(1e5 + 10);
    cin >> n >> m;
    vector<st> k[maxN];
    char ans[maxN][20];
    rep(i, m) {
        int p, y;
        cin >> p >> y;
        k[p].push_back({y, i});
    }
    rep(i, maxN) {
        if(k[i].size() != 0) {
            sort(k[i].begin(), k[i].end(), cmp);
            rep(j, k[i].size()) {
                sprintf(ans[k[i][j].index], "%06d%06d", i, j + 1);
            }
        }
    }
    rep(i, m) { cout << ans[i] << endl; }

    return 0;
}
