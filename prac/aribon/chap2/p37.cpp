#include <cstdio>
#include <iostream>
#include <string>
#include <queue>
using namespace std;
#define rep(i,N) for (int i = 0; i < (int)(N); i++)

const int INF = 100000000;
const int MAX_N = 100;
typedef pair<int,int> P;

char maze[MAX_N][MAX_N];
int N,M;
int sx,sy;
int gx,gy;

int d[MAX_N][MAX_N];

int dx[] = {1,0,-1,0}, dy[] = {0,1,0,-1};

int bfs(){
        queue<P> que;
        rep(y,N) rep(x,M) d[y][x] = INF;
        que.push(P(sy,sx));
        d[sy][sx] = 0;

        while(que.size()) {
                P p = que.front(); que.pop();
                if(p.first == gy && p.second == gx) break;

                rep(i,4){
                        int ny = p.first + dy[i], nx = p.second + dx[i];

                        if(0<=nx && nx<M && 0<=ny && ny<N && maze[ny][nx] != '#' && d[ny][nx] == INF) {
                                que.push(P(ny,nx));
                                d[ny][nx] = d[p.first][p.second]+1;
                        }
                }
        }
        return d[gy][gx];
}

int main(){
        scanf("%d %d", &N, &M);
        rep(y,N) rep(x,M) {
                scanf(" %c",&maze[y][x]);
                if(maze[y][x] == 'S') {
                        sx = x; sy = y;
                }
                if(maze[y][x] == 'G') {
                        gx = x; gy = y;
                }
        }
        int res = bfs();
        printf("%d\n",res);

        return 0;
}
