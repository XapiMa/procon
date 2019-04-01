#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define REP(i,k,n) for(int i = k; i < (int)(n); i++)
typedef long long ll;

int main(){
        int n,k;
        cin >> n >> k;
        cout << (int)(k*pow(k-1,n-1)) << endl;
        return 0;
}
