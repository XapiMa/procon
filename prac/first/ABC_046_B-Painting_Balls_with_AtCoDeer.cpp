#include <iostream>
#include <cmath>
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i,k,n) for(int i = k; i < (int)(n); i++)
using namespace std;
int main(){
        long long N,K;
        cin >> N >> K;
        long long ans = K;
        REP(i,1,N){
                ans*=(K-1);
        }
        cout << ans << endl;
        // cout << K*pow(K-1,N-1) << endl;

        return 0;
}
