#include <iostream>
#include <vector>
#include <algorithm>
#define rep(i,N) for(int i = 0; i<(int)(N); i++)
#define REP(i,k,N) for(int i = k; i<(int)(N); i++)
typedef long long ll;
using namespace std;
int d[101][10001];
int main(){
        ll N,W;
        ll v[101]={},w[101]={};
        cin >> N >> W;
        REP(i,1,N+1) cin>>v[i]>>w[i];

        REP(y,1,N+1) REP(x,1,W+1){
                if((x - w[y]) < 0) d[y][x] = d[y-1][x];
                else d[y][x] = max<ll>(d[y-1][x], d[y-1][x - w[y]] + v[y]);
        }

        cout << d[N][W] << endl;
        return 0;
}
