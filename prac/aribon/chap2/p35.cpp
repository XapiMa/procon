#include <cstdio>
#include <iostream>
#include <string>
using namespace std;
#define rep(i,N) for (int i = 0; i < (int)(N); i++)

const int MAX_N = 100;
int N,M;
string field[MAX_N];

void dfs(int x, int y){
        field[y][x] = '.';
        int dx[] = {-1,-1,-1,0,0,1,1,1};
        int dy[] = {-1,0,1,-1,1,-1,0,1};
        rep(i,8){
                int nx = x+dx[i],ny = y+dy[i];
                if(0<=nx && nx<M && 0 <= ny && ny < N && field[ny][nx] == 'W') dfs(nx,ny);
        }
        return;
}

int main(){
        scanf("%d %d", &N, &M);
        rep(y,N) cin >> field[y];
        int res = 0;
        rep(y,N){
                rep(x,M) if(field[y][x] == 'W') {
                        dfs(x,y);
                        res++;
                }
        }
        printf("%d\n",res);

        return 0;
}
