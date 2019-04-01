#include <iostream>
#include <random>
using namespace std;
#define rep(i,N) for(int i = 0; i<(int)(N); i++)

const int Msize = 20;
char m[Msize][Msize+1];
random_device rnd;
mt19937 mt(rnd());

void dfs(int y, int x){
        r = mt()%4;
        int dx = {0,1,0,-1};
        int dy = {1,0,-1,0};
        int setps[4] = {};
        int bit[4] = {};
        rep(i,4){
                int r = rnd()%4;
                while(bit[r]==1) r = rnd()%4;
                steps[i]=r;
                bit[r]=1;
        }
        if( 0 < y+dy[r] && 0 < x+dx[r] && y+dy[r] < Msize-1 && x+dx[r] < Msize-1) {
                if(m[dx[r],dy[r]] == '#') {
                        x+=dx[r];
                        y+=dy[y];
                }

        }
}

int main(){

}
