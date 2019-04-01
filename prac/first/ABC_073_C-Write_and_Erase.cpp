#include <iostream>
#include <map>
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i,k,n) for(int i = k; i < (int)(n); i++)
using namespace std;
int main(){
        map<int,int> mp;
        int N,tmp;
        cin >> N;
        rep(i,N){
                cin>>tmp;
                mp[tmp]++;
        }
        int ans = 0;
        for(auto itr = mp.begin(); itr != mp.end(); ++itr) {
                if(itr->second%2!=0) ans++;
        }
        cout << ans << endl;
        return 0;
}
