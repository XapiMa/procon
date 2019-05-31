#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i, k, n) for(int i = k; i < (int)(n); i++)
const int maxN = int(1e5 + 10);
int e[maxN] = {}, o[maxN] = {};
int num[maxN] = {};

int main() {
    int n;
    int x[110], y[110], h[110];
    cin >> n;
    rep(i, n) {
        cin >> x[i] >> y[i] >> h[i];
        if(h[i] == 100) {
            printf("%d %d %d\n", x[i], y[i], h[i]);
            return 0;
        }
    }
    rep(cx, 101) rep(cy, 101) {
        bool flag = true;
        int ch = 0;
        rep(i, n) {
            if(h[i] != 0) {
                ch = h[i] + abs(cx - x[i]) + abs(cy - y[i]);
                break;
            }
        }
        rep(i, n) {
            if(h[i] == 0) {
                if(ch > abs(cx - x[i]) + abs(cy - y[i])) {
                    flag = false;
                    break;
                }
            } else {
                int tch = h[i] + abs(cx - x[i]) + abs(cy - y[i]);
                if(tch != ch) {
                    flag = false;
                    break;
                }
            }
        }
        if(flag == true) {
            printf("%d %d %d\n", cx, cy, ch);
            return 0;
        }
    }
    return 0;
}
