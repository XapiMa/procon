#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <set>
#include <cstring>
#include <cmath>
#include <queue>
#include <tuple>

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define REP(i, k, n) for (int i = (int)(k); i < (int)(n); i++)
#define rrep(i, n) for (int i = (int)(n) - 1; i >= 0; i--)
#define rREP(i, k, n) for (int i = (int)(n) - 1; i >= k; i--)

#define debug(x) cerr <<#x << ": " << x << endl;

#define fi first
#define se second

#define vi vector<int>
#define pi pair<int,int>
#define pb push_back
#define mp make_pair

#define pcnt __builtin_popcount
#define tup tuple<long long,int,int>
#define mt make_tuple

typedef long long ll;
const ll inf = 900900900100100100;
const int MOD = (int)1e9 + 7;
const double EPS = 1e-9;
const int MID = 255;
using namespace std;
#define MAX_N 110

int dp[110][100100] = {};
int main(){
    int n,m,l;
    while(cin >> n >> m >> l,n) {
        rep(i,110) rep(j,100100) dp[i][j] = 0;
        vector<tup> E[MAX_N];
        rep(i,m){
            int a,b,d;
            long long e;
            cin >> a >> b >> d >> e;
            a--;
            b--;
            E[a].pb(mt(e,b,d));
            E[b].pb(mt(e,a,d));
        }
        priority_queue<tup,vector<tup>,greater<tup> > que;

        ll d[MAX_N][110];
        rep(i,MAX_N) rep(j,110) d[i][j] = inf;

        rep(i,110) d[0][i] = 0;
        que.push(mt(0,0,l));
        while(!que.empty()) {
            tup p = que.top();
            que.pop();
            ll cost = get<0>(p);
            int v = get<1>(p);
            int money = get<2>(p);
            if (d[v][money] < cost) continue;
            rep(i, E[v].size()) {
                tup e = E[v][i];
                //普通に動く
                if (d[get<1>(e)][money] > d[v][money] + get<0>(e)) {
                    d[get<1>(e)][money] = d[v][money] + get<0>(e);
                    que.push(mt(d[get<1>(e)][money], get<1>(e),money));
                }
                //お金をはらう
                if(get<2>(e) <= money) {
                    if (d[get<1>(e)][money - get<2>(e)] > d[v][money]) {
                        d[get<1>(e)][money - get<2>(e)] = d[v][money];
                        que.push(mt(d[get<1>(e)][money - get<2>(e)], get<1>(e),money - get<2>(e)));
                    }
                }
            }
        }
        ll ma = inf;
        rep(i,l + 1){
            ma = min(ma,d[n - 1][i]);
        }
        cout << ma << endl;
        // cout << "d[n-1] : " << d[n - 1] << endl;
        // int tt = n - 1;
        // vector<int> WW;
        // vector<int> VV;
        // while(true) {
        //     for(auto e : E[tt]) {
        //         if(get<1>(e) == bv[tt]) {
        //             WW.pb(get<2>(e));
        //             VV.pb(get<0>(e));
        //             break;
        //         }
        //     }
        //     if(tt == 0) break;
        //     tt = bv[tt];
        // }


        // REP(i, 1, l + 1) {
        //     REP(j, 1, WW.size() + 1) {
        //         dp[i][j] = dp[i][j - 1];
        //         if( >= WW[j - 1]) {
        //             dp[i][j] = max(dp[i][j - 1], dp[i - WW[j - 1]][j - 1] + VV[j - 1]);
        //         }
        //     }
        // }
        // cout << d[n - 1] - dp[l][WW.size()] << endl;

    }
    return 0;
}
