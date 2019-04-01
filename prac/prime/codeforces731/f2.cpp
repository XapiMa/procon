#include <iostream>
#include <algorithm>
#include <map>
#define rep(i,N) for (int i = 0; i < (int)(N)) ; i++)
using namespace std;


int main(){
        int N,a[200000];
        map<int,bool> mp;
        cin >> a;

        rep(i,N){
                cin >> a[i];
        }
        sort(a,a+M);
        rep(i,N) map[a[i]] = true;
        for(int i=0; a[i] < sqrt(a[n]); i++) {
                if(a[j]%a[i]==0) {}
                for(int j=2; a[i] * j <= a[n]; j++) {
                        mp[a[i]*j] = false;
                }
        }
        for(auto itr = mp.begin(); itr != mp.end(); ++itr) {
                if(itr->second == true) {
                        // 処理
                        // itr->first がprimary候補
                }
        }



        return 0;
}
