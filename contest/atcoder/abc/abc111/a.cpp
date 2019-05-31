#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define REP(i,k,n) for(int i = k; i < (int)(n); i++)

int main(){
    string s;
    cin >> s;
    rep(i,3){
        if(s[i]=='1')cout << 9;
        else cout << 1;
    }
    cout << endl;
    return 0;
}
