#include <bits/stdc++.h>

#define rep(i,n) for(int i = 0; i < n; i++)
#define rrep(i,n) for(int i = n - 1; i >= 0; i--)
#define REP(i,k,n) for(int i = k; i < n; i++)

#define vi vector<int>
#define pb push_back
using namespace std;

int dfs(int x,int y);
int dx[] = {0,-1,0,1,0};

int w,h;
string g[21];

int main(){
    while(cin >> w >> h,w) {
        rep(i,h){
            cin >> g[i];
        }
        rep(y,h) {
            rep(x,w){
                if(g[y][x] == '@') {
                    int cnt = dfs(x,y);
                    cout << cnt << endl;
                }
            }
        }
    }
    return 0;

}

int dfs(int x,int y){
    g[y][x] = '#';
    int cnt = 1;
    rep(i,4){
        int nx = x + dx[i], ny = y + dx[i + 1];
        if(nx >= 0 && ny >= 0 && nx < w && ny < h && g[ny][nx] == '.') {
            cnt += dfs(nx,ny);
        }
    }
    return cnt;
}
