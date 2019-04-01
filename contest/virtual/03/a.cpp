#include <iostream>
#include <cmath>
#define rep(i,N) for(int i = 0; i<(int)(N); i++)
#define REP(i,k,N) for(int i = k; i<(int)(N); i++)
using namespace std;
const int MAX_N = 10000010;
bool d[MAX_N];
int main(){
        int n;
        while(cin >> n) {
                rep(i,MAX_N) d[i]=true;
                for(int i = 2; i< sqrt(n+1); i++) {
                        if(d[i]) {
                                for(int j = 2; i*j<n+1; j++) {
                                        d[i*j]=false;
                                }
                        }
                }
                int ans = 0;
                REP(i,2,n+1){
                        if(d[i]) ans++;
                }
                cout << ans << endl;
        }

        return 0;
}
