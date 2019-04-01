typedef long long ll;
#define rep(i,N) for (ll i = 1; i < N; i++)

#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
        ll N;
        ll res = 10000000000;
        cin >> N;
        for (ll i = 1; i <= sqrt(N); i++) {
                if(N%i!=0) continue;
                res = min(res,max(i,N/i));
        }
        cout << (int)log10(res)+1 << endl;

        return 0;
}
