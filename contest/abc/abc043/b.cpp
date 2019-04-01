#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define REP(i,k,n) for(int i = k; i < (int)(n); i++)
typedef long long ll;
#define pb push_back

int main(){

        vector<int> v;
        string s;
        cin >> s;
        rep(i,s.length()){
                switch(s[i]) {
                case '0':
                        v.pb(0); break;
                case '1':
                        v.pb(1); break;
                case 'B':
                        if(v.size() != 0) {v.pop_back();}
                        break;
                }
        }
        rep(i,v.size()){
                cout << v[i];
        }
        cout << endl;
        return 0;
}
