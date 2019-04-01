#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define REP(i,k,n) for(int i = k; i < (int)(n); i++)
typedef long long ll;
#define pb push_back

// dp問題

int main(){
        int N,A;
        int x;
        int y[50];
        int absMax = 0;

        cin >> N >> A;
        rep(i,N){
                cin >> x;
                y[i] = x - A;
        }
        rep(i,N){
                if(absMax < abs(y[i])) absMax = abs(y[i]);
        }
        int yMax = N * absMax;

        // -YM ~ 0 ~ YM
        // 0以上で表現できるように 0 ~ 2YMに置き換えて考える
        ll dp[N+1][2*yMax+1];

        rep(i,2*yMax+1) dp[0][i]=0;
        dp[0][yMax]=1;

        for(int i = 1; i < N+1; i++) {
                rep(sum,2*yMax+1){
                        if(sum - y[i-1] < 0 || 2 * yMax < sum - y[i-1] ) {
                                dp[i][sum] = dp[i-1][sum];
                        }else{
                                dp[i][sum] = dp[i-1][sum] + dp[i-1][sum - y[i-1]];
                        }
                }
        }

        // 0枚しか選ばない時を除外する
        cout << dp[N][yMax] - 1 << endl;

        return 0;
}
