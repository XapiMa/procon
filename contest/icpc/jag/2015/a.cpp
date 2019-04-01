#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define REP(i,k,n) for(int i = k; i < (int)(n); i++)

#define vi vector<int>
#define pb push_back

typedef long long ll;
using namespace std;

double price[101][101] = {};

int main(){
    rep(y,101) rep(x,101){
        price[y][x] = sqrt((double)(pow(y,2) + pow(x,2)));
    }
    int d,e;
    while(cin >> d >> e,d) {
        double mn = 1000;
        rep(y,d){
            int x = d - y;
            mn = min(mn,abs(e - price[y][x]));
        }
        cout << mn << endl;
    }
    return 0;
}
