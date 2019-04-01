#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define REP(i,k,n) for(int i = k; i < (int)(n); i++)

int main(){

    int a[3];
    rep(i,3) cin >> a[i];
    sort(a,a + 3);
    cout << (a[1] - a[0]) + (a[2] - a[1]) << endl;
    return 0;
}
