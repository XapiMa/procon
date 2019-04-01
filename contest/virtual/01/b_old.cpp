#include <iostream>
#include <cmath>
#include <algorithm>
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i,k,n) for(int i = k; i < (int)(n); i++)
using namespace std;

int main(){
        int w,h;
        int d[50][50];
        while(true) {
                rep(i,50) rep(j,50) d[i][j]=0;
                cin >> w >> h;
                if(w==0) break;
                rep(i,h) rep(j,w) cin>>d[i][j];
                int dy[]={0,1};
                int dx[]={-1,0,1};
                rep(i,h) rep(j,w){
                        if(d[i][j]==1) {
                                rep(k,2) rep(l,3){
                                        int y=i+dy[k];
                                        int x=j+dx[l];
                                        if(k==0&&l==0) continue;
                                        if(k==0&&l==1) continue;
                                        if(y<0 || y>=h || x<0 || x>=w ) continue;
                                        if(d[y][x]==2) {
                                                d[i][j]=2;
                                        }
                                        if(d[y][x]==1) d[y][x]=2;
                                }
                        }
                }
                int count = 0;
                rep(i,h) {
                        rep(j,w){
                                if(d[i][j]==1) count++;
                                cout << d[i][j];
                        }
                        cout << "\n";
                }
                cout << "ans: " << count << endl;
        }

        return 0;
}
