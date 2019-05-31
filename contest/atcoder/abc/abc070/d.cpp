#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i, k, n) for(int i = k; i < (int)(n); i++)
typedef long long ll;

#define vi vector<int>
#define pb push_back

const int limit = 100010;
using edge = struct {
    int to;
    ll cost;
};
vector<edge> tree[limit]; 
ll costs[limit];


void dfs(int now,int past,ll cost){
    costs[now] = cost;
    for (auto &e : tree[now]){
        if(e.to == past)continue;
        dfs(e.to, now, e.cost+cost);
    }
}

int main() {
    int n;
    cin >> n;
    rep(i,n-1){
        int a, b, c;
        cin >> a >> b >> c;
        tree[a].pb({b,c});
        tree[b].pb({a,c});
    }
     int q,k;
     cin >> q >> k;

     dfs(k,0,0);
     rep(i,q){
         int x,y;
         cin >> x >> y;
         cout << costs[x]+costs[y] << endl;
     }
    return 0;
}