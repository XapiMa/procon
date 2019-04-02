#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define REP(i,k,n) for(int i = k; i < (int)(n); i++)
typedef long long ll;

int main(){
        int N;
        int t[110];
        int M;
        int sum = 0;
        int p[110],x[110];
        cin >> N;
        rep(i,N){
                cin >> t[i];
                sum += t[i];
        }
        cin >> M;
        rep(i,M) cin >> p[i] >> x[i];
        rep(i,M) cout << sum - (t[p[i]-1] - x[i]) << endl;
        return 0;
}
