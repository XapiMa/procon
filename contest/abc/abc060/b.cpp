#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define REP(i,k,n) for(int i = k; i < (int)(n); i++)
typedef long long ll;

#define vi vector<int>
#define pb push_back

int main(){

    int a,b,c;
    cin >> a >> b >> c;
    vi m;
    string ans = "NO";
    REP(i,1,b + 1) if(i * a % b == c) ans = "YES";
    cout << ans << endl;
    return 0;
}
