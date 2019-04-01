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
ll d[D_MAX + 10];

int main(){
    // ifstream in("c_in.txt");
    // cin.rdbuf(in.rdbuf());
    REP(i,0,D_MAX + 1) d[i] = i;
    REP(i,1,D_MAX + 1) d[i] += d[i - 1];

    int price;
    while(cin >> price, price) {
        int maxn = 0,maxa = 0;
        REP(a,1,price + 1){
            int b = a;
            int t = price;
            int m = (b + t) / 2;
            while(b <= t) {
                ll tmp = d[m] - d[a - 1];
                if(tmp == price) {
                    int n = (m - a + 1);
                    if(maxn < n) {
                        maxn = n;
                        maxa = a;
                    }
                    break;
                }
                else if(tmp < price) {
                    b = m + 1;
                }else{
                    t = m - 1;
                }
                m = (b + t) / 2;
            }
        }
        cout << maxa << " " << maxn << endl;
    }
    return 0;
}
