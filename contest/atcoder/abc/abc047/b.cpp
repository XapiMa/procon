#include <iostream>
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i,k,n) for(int i = k; i < (int)(n); i++)
using namespace std;


int box[100][100] = {};
int main(){
        int W,H,N; cin >> W >> H >> N;

        rep(i,N){
                int x,y,a; cin >> x >> y >> a;
                switch(a) {
                case 1: rep(j,x) rep(k,H) box[j][k] = 1; break;
                case 2: REP(j,x,W) rep(k,H) box[j][k] = 1; break;
                case 3: rep(j,W) rep(k,y)  box[j][k] = 1; break;
                case 4: rep(j,W) REP(k,y,H)  box[j][k] = 1; break;
                }
        }
        int sum = 0;
        rep(j,W) rep(k,H) if(box[j][k] == 0) sum++;
        cout << sum << endl;

        return 0;
}
