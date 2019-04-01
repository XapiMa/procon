#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i,k,n) for(int i = k; i < (int)(n); i++)
using namespace std;

int main(){

        char abc[3] = {};
        string S;
        cin >> S;
        rep(i,3) abc[S[i]-'a']++;
        string ans = "Yes";
        rep(i,3) if(abc[i]==0) ans="No";
        cout << ans << endl;
        return 0;
}
