#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <vector>
#include <cstring>
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define REP(i,k,n) for(int i = k; i < (int)(n); i++)
using namespace std;



bool d[100][100];
int rx = 10,ry = 10;


void move(int l, int pm, int *r);

int main(){
    int N,M;
    int X,Y,l[100];
    char dir[100];
    while(true) {
        cin >> N;
        if (N == 0) break;
        memset(d,false,sizeof(d));
        rep(i,N) cin >> X >> Y, d[20 - Y][X] = true;
        cin >> M;
        rep(i,M) cin >> dir[i] >> l[i];
        rep(i,M){
            switch (dir[i]) {
            case 'N': move(l[i],-1,ry); break;
            case 'S': move(l[i], 1,ry); break;
            case 'W': move(l[i],-1,rx); break;
            case 'E': move(l[i], 1,rx); break;
            }
        }

        string ans = "Yes";
        rep(y,21) {
            rep(x,21) {
                cout << d[y][x] << " ";
                if(d[y][x] == true) ans = "No";
            } cout << endl;
        }
        cout << ans << endl;
    }

    return 0;
}

void move(int l, int pm, int *r){
    rep(i,l){
        *r += pm;
        d[ry][rx] = false;
    }
}
