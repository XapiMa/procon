#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define REP(i,k,n) for(int i = k; i < (int)(n); i++)
#define vi vector<int>
#define pb push_back
typedef long long ll;

int main(){
    int n;
    vi a;
    int tmp;
    cin >> n;
    rep(i,n){
        cin >> tmp;
        a.pb(tmp - (i + 1));
    }
    sort(a.begin(),a.end());
    ll sad;
    rep(i,n){
        sad += abs(a[i] - a[n / 2]);
    }
    cout << sad << endl;

    return 0;
}
