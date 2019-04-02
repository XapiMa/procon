#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define REP(i,k,n) for(int i = k; i < (int)(n); i++)
typedef long long ll;

int main(){
        string strs[] = {"dream","dreamer","erase","eraser"};
        string S;
        cin >> S;
        rep(i,4) reverse(strs[i].begin(),strs[i].end());
        reverse(S.begin(),S.end());
        string ans = "YES";
        for (int i = 0; i < S.size(); ) {
                bool flag = false;
                rep(j,4){
                        if(strs[j] == S.substr(i,strs[j].size())) {
                                i += strs[j].size();
                                flag = true;
                        }
                }
                if(flag == false) {
                        ans = "NO";
                        break;
                }
        }

        cout << ans << endl;

        return 0;
}
