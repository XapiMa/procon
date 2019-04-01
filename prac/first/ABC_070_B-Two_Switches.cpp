#include <iostream>
#include <algorithm>
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i,k,n) for(int i = k; i < (int)(n); i++)
using namespace std;
int main(){
        int A,B,C,D;
        cin >>A>>B>>C>>D;
        int ans = min(B,D) - max(A,C);
        if(ans<0) ans = 0;
        cout << ans << endl;

        return 0;
}
