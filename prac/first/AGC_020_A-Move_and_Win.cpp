#include <iostream>
#include <map>
#include <algorithm>
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i,k,n) for(int i = k; i < (int)(n); i++)
using namespace std;
int main(){
        int N,A,B;
        cin >> N >> A >> B;
        string ans = "Alice";
        if((B-A+1)%2==0) ans="Borys";
        cout << ans << endl;
        return 0;
}
