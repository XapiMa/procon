#include <iostream>
#include <algorithm>
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i,k,n) for(int i = k; i < (int)(n); i++)
using namespace std;

long X[200000];
long X_s[200000];
int main(){

        int N; cin>>N;
        rep(i,N) cin>>X[i];
        rep(i,N) X_s[i] = X[i];
        sort(X_s,X_s+N);
        long m1 = X_s[N/2-1];
        long m2 = X_s[N/2];
        rep(i,N){
                if(X[i]<=m1) cout << m2 << endl;
                else cout << m1 << endl;
        }
        return 0;
}
