#include <iostream>
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i,k,n) for(int i = k; i < (int)(n); i++)
using namespace std;
int main(){
        int W,H,N;
        int x[100],y[100],a[100];

        cin >> W >> H >> N;
        rep(i,N) cin >> x[i] >> y[i] >> a[i];
        int line[5] = {-1,0,W,0,H};
        rep(i,N) switch(a[i]) {
        case 1: line[a[i]] = max(line[a[i]], x[i]); break;
        case 2: line[a[i]] = min(line[a[i]], x[i]); break;
        case 3: line[a[i]] = max(line[a[i]], y[i]); break;
        case 4: line[a[i]] = min(line[a[i]], y[i]); break;
        }
        int width = line[2]-line[1];
        int height = line[4]-line[3];

        if(width <= 0 || height <= 0) cout << 0 << endl;
        else cout << width * height << endl;

        return 0;
}
