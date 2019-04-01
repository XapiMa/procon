#include <iostream>
#include <cmath>
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i,k,n) for(int i = k; i < (int)(n); i++)
using namespace std;
int main(){
        int N;
        cin >> N;
        long long ans = 1;
        int n = pow(10,9)+7;
        rep(i,N){
                ans = ans*(i+1)%n;
        }
        cout << ans << endl;

        return 0;
}
