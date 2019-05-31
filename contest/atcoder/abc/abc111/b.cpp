#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define REP(i,k,n) for(int i = k; i < (int)(n); i++)

int main(){
    int n;
    cin >> n;
    int t = n/100;
    int tmp = t+t*10+t*100;
    if (tmp >= n) cout << tmp << endl;
    else cout << tmp+111 << endl;
    return 0;
}
