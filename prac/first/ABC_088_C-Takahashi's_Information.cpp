#include <iostream>
#include <cmath>
using namespace std;
#define rep(i,N) for (int i = 0; i < N; i++)
int main(){
        int c[3][3];
        int diff[3];
        rep(i,3) rep(j,3) cin >> c[i][j];
        rep(i,3){
                rep(j,3){
                        diff[j] = c[i][j]-c[(i+1)%3][j];
                }
                rep(j,2){
                        if(diff[j]!=diff[j+1]) {
                                cout << "No" << endl;
                                return 0;
                        }
                }
        }
        rep(j,3){
                rep(i,3){
                        diff[i] = c[i][j]-c[i][(j+1)%3];
                }
                rep(j,2){
                        if(diff[j]!=diff[j+1]) {
                                cout << "No" << endl;
                                return 0;
                        }
                }
        }
        cout << "Yes" << endl;

        return 0;
}
