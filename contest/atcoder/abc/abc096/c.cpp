#include <iostream>
#include <algorithm>
#include <cmath>

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i,k,n) for(int i = k; i < (int)(n); i++)
using namespace std;

char s[50+10][50+10];
int main(){
        int H,W;
        cin >> H >> W;
        rep(i,W+2) rep(j,W+2) s[i][0]='.';
        rep(i,W+2) rep(j,W+2) s[i][W+2]='.';
        rep(i,W+2) rep(j,W+2) s[0][j]='.';
        rep(i,W+2) rep(j,W+2) s[H+2][j]='.';
        rep(i,H) rep(j,W) cin>>s[i+1][j+1];
        REP(i,1,H+1) REP(j,1,W+1){
                if(s[i][j] == '#') {
                        bool Flag = false;
                        if(s[i-1][j] == '#') Flag = true;
                        if(s[i+1][j] == '#') Flag = true;
                        if(s[i][j-1] == '#') Flag = true;
                        if(s[i][j+1] == '#') Flag = true;

                        if(Flag == false) {
                                cout << "No" << endl;
                                return 0;
                        }
                }
        }
        cout << "Yes" << endl;
        return 0;
}
