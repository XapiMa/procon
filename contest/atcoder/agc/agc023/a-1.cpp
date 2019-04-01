#include <iostream>
#include <algorithm>
#include <map>
typedef long long ll;
#define rep(i, n) for(int i = 0; i < (ll)(n); i++)
#define REP(i,k,n) for(int i = k; i < (ll)(n); i++)
using namespace std;


map<ll,ll> mp;
int main(){
        ll N;
        cin>>N;
        ll cs = 0;
        mp[0] = 1;
        for (int i = 0; i < N; i++) {
                ll tmp;
                cin >> tmp;
                cs += tmp;
                mp[cs]++;
        }
        ll res = 0;
        for(auto& p : mp) {
                res+= p.second * (p.second-1) / 2;
        }

        cout << res << endl;
        return 0;
}
