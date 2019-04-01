#include <iostream>
#include <cmath>
#include <algorithm>
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i,k,n) for(int i = k; i < (int)(n); i++)
using namespace std;

int w,h;
int field[51][51];

void dfs(int y, int x){
        field[y][x]= 0;

        int dx[] = {-1,-1,-1,0,0,1,1,1};
        int dy[] = {-1,0,1,-1,1,-1,0,1};
        rep(i,8){
                int nx = x+dx[i];
                int ny = y+dy[i];
                if(nx>=0 && nx<w && ny>=0 && ny<h && field[ny][nx] == 1) dfs(ny,nx);
        }
        return;
}

int main(){
        while(true) {
                cin >> w >> h;
                if(w==0) break;
                rep(y,h) rep(x,w){
                        cin >> field[y][x];
                }
                int ans = 0;
                rep(y,h) rep(x,w){
                        if(field[y][x] == 1) {
                                dfs(y,x);
                                ans++;
                        }
                }
                cout << ans << endl;
        }

        return 0;
}
