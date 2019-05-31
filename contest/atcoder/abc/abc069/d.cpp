#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i, k, n) for(int i = k; i < (int)(n); i++)
typedef long long ll;

#define vi vector<int>
#define pb push_back

int a[100 * 100 + 10];
int main() {
    int h, w, n, num, ni;

    cin >> h >> w >> n;
    ni = 0;
    rep(i, n) {
        cin >> num;
        for(int j = 0; j < num; j++) {
            a[ni] = i + 1;
            ni++;
        }
    }
    rep(y, h) {
        if(y % 2 == 0) {
            rep(x, w) { 
                cout << a[y * w + x];
                if (x!=w-1)cout << " "; 
                }
        } else {
            rep(x,w){
                cout << a[((y+1)*w-1)-x];
                if (x!=w-1)cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}