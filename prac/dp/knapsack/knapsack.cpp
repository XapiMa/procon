#include <iostream>
#include <cmath>
#include <algorithm>
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i,k,n) for(int i = k; i < (int)(n); i++)
using namespace std;

int d[210][10000000000];
int main(){
        int N,W;
        int A[210][2];
        cin >> N >> W;
        rep(i,N) cin>>A[i+1][0]>>A[i+1][1];
        rep(i,W) d[0][i]=0;
        rep(i,N) d[i][0]=0;
        REP(i,1,N+1){
                REP(j,1,W+1){
                        int num2;
                        if(j-A[i][1] < 0) num2 = 0;
                        else num2 = d[i-1][j-A[i][1]]+A[i][0];
                        d[i][j]=max(d[i-1][j],num2);
                }
        }
        // rep(i,N+1){
        //         rep(j,W+1){
        //                 cout << d[i][j] << " ";
        //         }
        //         cout << endl;
        // }
        cout << d[N][W] << endl;

        return 0;
}
