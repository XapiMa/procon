#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define REP(i,k,n) for(int i = k; i < (int)(n); i++)
typedef long long ll;

int main(){
        int k,s;
        int ans = 0;
        cin >> k >> s;
        rep(x,k+1) rep(y,k+1){
                int z = s-x-y;
                if(0<=z && z <= k) ans++;
        }
        cout << ans << endl;
        return 0;
}
