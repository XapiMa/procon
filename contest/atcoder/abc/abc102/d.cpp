#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define REP(i,k,n) for(int i = k; i < (int)(n); i++)
#define vi vector<int>
#define pb push_back
typedef long long ll;

int main(){
    int n;
    vector<ll> a;
    int tmp;
    cin >> n;
    a.pb(0);
    rep(i,n){
        cin >> tmp;
        a.pb(tmp);
        a[i + 1] += a[i];
    }
    ll nums[4];
    ll ans = 0;
    bool flag = true;
    REP(i,1,n - 3) REP(j,i + 1,n - 2) REP(k,j + 1,n - 1) {
        nums[0] = (a[i] - a[0]);
        nums[1] = (a[j] - a[i]);
        nums[2] = (a[k] - a[j]);
        nums[3] = (a[n] - a[k]);
        if(i == 3 && j == 4 && k == 6) {
            rep(z,4) cout << nums[z] << endl;
        }
        sort<ll>(nums,nums + 4);
        if (flag) {
            ans = abs(nums[0] - nums[3]);
        }
        else ans = min(ans,abs(nums[0] - nums[3]));
        flag = false;
    }
    cout << ans << endl;

    return 0;
}
