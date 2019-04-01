#include <iostream>
#include <algorithm>
#include <vector>
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i,k,n) for(int i = k; i < (int)(n); i++)
using namespace std;

int main(void) {
        const int AMAX = 200000;
        int N, K;
        cin >> N >> K;

        vector<int> a(AMAX + 1);
        rep(i,N) {
                int x;
                cin >> x;
                a[x]++;
        }

        sort(a.begin(),a.end(),greater<int>());
        long cnt = 0;
        REP(i, K, N) cnt+=a[i];
        cout << cnt <<endl;
        return 0;
}
