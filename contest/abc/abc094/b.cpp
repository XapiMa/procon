#include <iostream>
#include <algorithm>
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i,k,n) for(int i = k; i < (int)(n); i++)
using namespace std;
int main(){

        int N,M,X; cin>>N>>M>>X;
        int a[100+1]; rep(i,M) cin>>a[i];
        int ans0=0,ansn=0;
        rep(i,M) if(a[i]<X) ans0++; else ansn++;
        cout << min(ans0,ansn) << endl;
        return 0;
}
