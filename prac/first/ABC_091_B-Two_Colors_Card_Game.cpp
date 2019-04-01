#include <iostream>
#include <map>
#include <algorithm>
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i,k,n) for(int i = k; i < (int)(n); i++)
using namespace std;


map<string,int> card;
int main(){
        int ans = 0;
        int N; cin >> N;
        string s[100],t[100];
        rep(i,N){
                cin >> s[i];
                card[s[i]]++;
        }
        int M; cin >> M;
        rep(i,M){
                cin >> t[i];
                card[t[i]]--;
        }
        rep(i,N){
                ans = max(ans,card[s[i]]);
        }
        cout << ans <<endl;
        return 0;
}
