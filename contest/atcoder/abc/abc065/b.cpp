#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define REP(i,k,n) for(int i = k; i < (int)(n); i++)
typedef long long ll;

#define vi vector<int>
#define pb push_back

int main(){

    int n;
    vi a;
    cin >> n;
    rep(i,n){
        int tmp;
        cin >> tmp;
        a.pb(tmp);
    }
    int now = 1;
    rep(i,n){
        if(now == 2) {
            cout << i << endl;
            return 0;
        }
        now = a[now - 1];
    }
    cout << -1 << endl;
    return 0;
}
