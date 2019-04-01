#include <iostream>
#include <map>
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i,k,n) for(int i = k; i < (int)(n); i++)
using namespace std;
int main(){
        int H,W;
        char s[55][55];
        cin >> H >> W;
        rep(j,W+2) {
                s[0][j]='.';
                s[H+1][j]='.';
        }
        rep(i,H+2){
                s[i][0]='.';
                s[i][W+1]='.';
        }
        rep(i,H) rep(j,W){
                cin >> s[i+1][j+1];
        }
        REP(i,1,H+1) REP(j,1,W+1){
                if(s[i][j]=='#') continue;
                int count = 0;
                REP(k,-1,2) REP(l,-1,2){
                        if(s[i+k][j+l]=='#') count++;
                }
                s[i][j]='0'+count;
        }

        REP(i,1,H+1){
                REP(j,1,W+1){
                        cout << s[i][j];
                }
                cout << endl;
        }
        return 0;
}
