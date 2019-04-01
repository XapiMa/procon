#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define REP(i,k,n) for(int i = k; i < (int)(n); i++)

#define vi vector<int>
#define pb push_back

typedef long long ll;
using namespace std;



int main(){
    int x,y,s;
    while(cin >> x >> y >> s,s) {

        int mx = 0;
        REP(o1,1,s) REP(o2,1,s){
            int fx1 = o1 * (100 + x) / 100,fx2 = o2 * (100 + x) / 100;
            if(fx1 + fx2 == s) {
                int fy1 = o1 * (100 + y) / 100, fy2 = o2 * (100 + y) / 100;
                mx = max(mx,fy1 + fy2);
            }
        }
        cout << mx << endl;
    }
    return 0;
}
