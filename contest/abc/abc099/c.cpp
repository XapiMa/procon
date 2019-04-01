#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define REP(i,k,n) for(int i = k; i < (int)(n); i++)
using namespace std;

int main(){
        int N;
        cin >> N;
        int ans = N;
        for ( int i = 0; i <= N; i++) {
                int item = 6;
                int p_c = 0;
                int dis = i;
                while (dis > 0) {
                        p_c += dis % item;
                        dis /= item;
                }

                item = 9;
                dis = N - i;
                while (dis > 0) {
                        p_c += dis % item;
                        dis /= item;
                }
                ans = min(ans,p_c);
        }
        cout << ans <<endl;
        return 0;
}
