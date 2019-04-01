#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define REP(i,k,n) for(int i = k; i < (int)(n); i++)
typedef long long ll;

#define vi vector<int>
#define pb push_back

int main(){
        string s;
        cin >> s;
        int over = 0;
        rep(i,s.length()){
                if(s[i] == 'g') over++;
                else over--;
        }
        // 小数点以下は切り捨て
        cout << over/2 << endl;
        return 0;
}
