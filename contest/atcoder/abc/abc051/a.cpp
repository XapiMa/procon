#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define REP(i,k,n) for(int i = k; i < (int)(n); i++)
typedef long long ll;

int main(){
        string s;
        cin >> s;
        rep(i,s.length()){
                if (s[i] != ',') cout << s[i];
                else cout << " ";
        }
        cout << endl;
        return 0;
}
