#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i, k, n) for(int i = k; i < (int)(n); i++)
typedef long long ll;

#define vi vector<int>
#define pb push_back

int main() {
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    cout << max(0,min(b,d)-max(a,c)) << endl;
    return 0;
}