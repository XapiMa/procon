#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define REP(i,k,n) for(int i = k; i < (int)(n); i++)
typedef long long ll;

#define vi vector<int>
#define pb push_back

string s;
ll ans = 0;

void dfs(int li,int index, ll sum){
        if(li == s.length()) {
                ans += sum;
        }
        if(li+index > s.length()) {
                return;
        }
        // + 入れないとき
        dfs(li,index+1,sum);
        // + 入れるとき
        ll num = atoll(s.substr(li,index).c_str());
        dfs(li+index,1,sum+num);
}

int main(){
        cin >> s;
        dfs(0,1,0);
        cout << ans << endl;
        return 0;
}
