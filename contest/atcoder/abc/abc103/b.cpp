#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define REP(i,k,n) for(int i = k; i < (int)(n); i++)

bool check(string s, string t){
    rep(i,s.length()){
        if(s.substr(i,s.length() - i) + s.substr(0,i) == t)
            return true;
    }
    return false;
}

int main(){
    string s,t;
    cin >> s >> t;
    if(check(s,t)) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
