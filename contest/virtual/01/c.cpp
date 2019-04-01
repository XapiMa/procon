#include <iostream>
#include <cmath>
#include <algorithm>
#include <map>
#include <vector>
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i,k,n) for(int i = k; i < (int)(n); i++)
using namespace std;

int main(){
        int N;
        string s[12];
        cin >> N;
        rep(i,N) cin >> s[i];
        map<char,int> mp;
        rep(i,N) rep(j,s[i].size()){
                mp[s[i][j]]++;
        }
        vector<int> v(10);
        rep(i,10){
                v.push_back(i);
        }
        int count=0;
        for(int i = 0; i < 10*9*8*7; ++i) {
                auto itr = mp.begin();
                for(auto x : v) {
                        if(itr == mp.end()) break;
                        mp[itr->first]=x;
                        itr++;
                }
                int sum =0,num=0;
                rep(i,N-1){
                        rep(j,s[i].size()){
                                num += mp[s[i][j]]*pow(10,s[i].size()-1-j);
                        }
                        sum += num;
                }
                int ans = 0;
                rep(j,s[N-1].size()){
                        ans += mp[s[N-1][j]]*pow(10,s[j].size()-1)-j;
                }
                if(ans == sum) count++;

                next_permutation(v.begin(), v.end()); // 次の順列を生成
        }
        cout << count << endl;

        return 0;
}
