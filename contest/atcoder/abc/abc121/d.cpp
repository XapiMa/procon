#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define REP(i,k,n) for(int i = k; i < (int)(n); i++)
typedef long long ll;

#define vi vector<int>
#define pb push_back


int main(){
    ll a, b, bef = 0, aft = 0, mid = 0;
    cin >> a >> b;
    if (a % 2 != 0) {
        bef = a; 
        a++;
    }
    if (b % 2 == 0) {
        aft = b;
        b--;
    }

    if (((b - a) + 1) / 2 % 2 == 0) mid = 0;
    else mid = 1;
    cout << (aft ^ mid ^ bef) << endl;
    return 0;
}