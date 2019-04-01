#include <iostream>
#include <cmath>
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i,k,n) for(int i = k; i < (int)(n); i++)
using namespace std;
int main(){
        int n,k; cin>>n>>k;
        rep(i,k){
                if(n%10!=0) {
                        n = n-1;
                }else{
                        n = n/10;
                }
        }
        cout << n << endl;
        return 0;
}
