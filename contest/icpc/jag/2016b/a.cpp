#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define REP(i,k,n) for(int i = k; i < (int)(n); i++)

#define vi vector<int>
#define pb push_back

typedef long long ll;
using namespace std;



int main(){
    int r0,w,c,r;
    while(cin >> r0 >> w >> c >> r,r0 != 0 && w != 0 && c != 0 && r != 0) {
        int nc = r0 / w;
        if(nc > c) cout << 0 << endl;
        else{
            int ans = (c * w - r0) / r;
            if((c * w - r0) % r != 0) ans++;
            cout << ans  << endl;
        }
    }


    return 0;
}
