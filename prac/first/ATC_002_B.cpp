#include <iostream>
#include <algorithm>
#include <cmath>
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i,k,n) for(int i = k; i < (int)(n); i++)
using namespace std;
typedef long long ll;



ll pow_mod (ll n, ll p, ll m){
        if(p == 1) return n % m;
        else if(p % 2 == 0) {
                ll tmp = pow_mod(n,p/2,m);
                return (tmp * tmp) % m;
        }else{
                return (pow_mod(n,p-1,m) * n) % m;
        }
}

int main (){
        ll N,M,P;
        cin >> N >> M >> P;
        cout << pow_mod(N,P,M) << endl;
        return 0;
}
