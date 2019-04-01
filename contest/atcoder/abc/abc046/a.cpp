#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define REP(i,k,n) for(int i = k; i < (int)(n); i++)
typedef long long ll;

int main(){
        int x[101] = {};
        int in[3];
        int ans = 0;
        rep(i,3) cin >> in[i];
        rep(i,3) x[in[i]]=1;
        rep(i,101) if(x[i]>0) ans++;

        cout << ans << endl;
        return 0;
}
