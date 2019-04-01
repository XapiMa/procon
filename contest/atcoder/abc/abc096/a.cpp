#include <iostream>
#include <algorithm>
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i,k,n) for(int i = k; i < (int)(n); i++)
using namespace std;
int main(){

        int a,b;
        cin >> a >> b;
        int ans = a - 1 + 1;
        if (a>b) --ans;
        cout << ans << endl;
        return 0;
}
