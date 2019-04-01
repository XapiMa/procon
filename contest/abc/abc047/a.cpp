#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define REP(i,k,n) for(int i = k; i < (int)(n); i++)
typedef long long ll;

int main(){
        int a,b,c;
        string ans;
        cin >> a >> b >> c;
        if(a+b == c || a == b+c || b == c+a) ans = "Yes";
        else ans = "No";
        cout << ans << endl;
        return 0;
}
