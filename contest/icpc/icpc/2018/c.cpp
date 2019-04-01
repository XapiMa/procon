#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define pb push_bask
#define mp make_pair
typedef long long ll;


#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define REP(i,k,n) for(int i = k; i < (int)(n); i++)

const int D_MAX = 1000000000;
// const int D_MAX = 10000;
// ll d[D_MAX + 10];

int main(){
    // ifstream in("c_in.txt");
    // cin.rdbuf(in.rdbuf());

    int price;
    while(cin >> price, price) {
        ll maxn = 0,maxa = 0;
        REP(a,1,(price) / 2 + 1){
            ll A = 1,B = (2 * a - 1),C = -2 * price;
            double D = sqrt(B * B - 4.0 * A * C);
            int iD = (int)D;
            if(D == iD) {
                if((-1 * B + iD) % 2 == 0) {
                    ll n = (-1 * B + iD) / 2;
                    if(n > maxn) {
                        maxa = a; maxn = n;
                    }
                }
            }
        }
        if(maxn == 0) {
            maxa = price;
            maxn = 1;
        }
        cout << maxa << " " << maxn << endl;
    }
    return 0;
}



// }
// a = i;
// n / 2 (2 * a + (n - 1)) = price;
// n *(2 * a + (n - 1)) = 2 * price;
// n *n + (2 * a - 1) * n - 2 * price = 0;
// A = 1; B = (2 * a - 1); C = -2 * price;
// (-1 * B + sqrt(B * B - 4 * A * C)) / 2 * A;
// double D = sqrt(B * B - 4.0 * A * C);
// if(D==(int)D){
//   if((-1 * B + (int)D) % 2 == 0)
// }
