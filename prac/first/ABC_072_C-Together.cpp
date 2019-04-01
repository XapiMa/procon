#include <iostream>
#include <map>
#include <algorithm>
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i,k,n) for(int i = k; i < (int)(n); i++)
using namespace std;
int main(){
        map<int,int> mp;
        int N;
        cin >> N;
        int tmp;
        rep(i,N){
                cin >> tmp;
                mp[tmp]++;
                mp[tmp+1]++;
                mp[tmp-1]++;
        }
        int max_num = 0;
        for(auto itr = mp.begin(); itr != mp.end(); ++itr) {
                max_num = max(max_num, itr->second);
        }
        cout << max_num << endl;
        return 0;
}
