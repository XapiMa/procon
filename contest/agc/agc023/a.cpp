#include <iostream>
#include <algorithm>
typedef long long ll;

#define rep(i, n) for(ll i = 0; i < (ll)(n); i++)
#define REP(i,k,n) for(ll i = k; i < (ll)(n); i++)
using namespace std;
int main(){
        ll N,A[100000*2];
        cin>>N;
        rep(i,N) cin>>A[i];
        ll res=0;
        rep(i,N){
                ll sum = 0;
                ll zeroCount = -1;
                REP(j,i,N){
                        sum+=A[j];
                        if(A[j]==0) zeroCount++;
                        else zeroCount = 0;
                        if(zeroCount != j-i && sum == 0) res++;
                }
        }
        cout << res << endl;

        return 0;
}
