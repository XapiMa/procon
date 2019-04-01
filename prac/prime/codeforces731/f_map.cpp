#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <map>
#define rep(i,N) for (int i = 0; i < (int)(N); i++)
using namespace std;


int main(){
        // 重複するパワーを持つカードをどう処理する？
        int N;
        bool p[200000];
        map<int,int> mp;
        cin >> N;
        int tmp;
        rep(i,N){
                cin >> tmp;
                mp[tmp]++;
        }

        memset(p,true,sizeof(p));
        for(auto itr = mp.begin(); itr->first < sqrt(mp.rbegin()->first); ++itr) {
                if(p[itr->first] == true) {
                        for(int j = 2; itr->first * j < mp.rbegin()->first; j++) {
                                p[itr->first * j] = false;
                        }
                }
        }
        int ans = 0;
        for(auto itr = mp.begin(); itr != mp.end(); ++itr) {
                if(p[itr->first] == true) {
                        int sum = itr->first;
                        for(auto itr2 = itr; ++itr2 != mp.end(); ) {
                                sum += (itr2->first - (itr2->first % itr->first))*itr2->second;
                        }
                        ans = max(ans,sum);
                }
        }
        cout << ans << endl;

        return 0;
}
