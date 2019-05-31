#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i, k, n) for(int i = k; i < (int)(n); i++)

using ll = long long;

vector<ll> nums;

void dfs(ll now, int c7, int c5, int c3) {
    // cout << now << endl;
    if(now >= 1e9)
        return;
    if(c7 > 0 && c5 > 0 && c3 > 0) {
        nums.push_back(now);
    }
    dfs(now * 10 + 7, c7 + 1, c5, c3);
    dfs(now * 10 + 5, c7, c5 + 1, c3);
    dfs(now * 10 + 3, c7, c5, c3 + 1);
}

int main() {
    int n;
    cin >> n;
    dfs(0, 0, 0, 0);
    sort(nums.begin(), nums.end());
    ll ans;

    for(ans = 0; ans < nums.size(); ans++) {
        if(nums[ans] > n)
            break;
    }
    cout << ans << endl;
    return 0;
}
