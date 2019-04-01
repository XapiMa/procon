#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define REP(i,k,n) for(int i = k; i < (int)(n); i++)
#define vi vector<int>
#define pb push_back

int main(){
    int n;
    vi a;
    int tmp;
    cin >> n;
    rep(i,n){
        cin >> tmp;
        a.pb(tmp);
    }
    sort(a.begin(),a.end());
    cout << abs(a[0] - a[a.size() - 1]) << endl;

    return 0;
}
