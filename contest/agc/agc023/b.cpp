#include <iostream>
#include <algorithm>
typedef long long ll;

#define rep(i, n) for(ll i = 0; i < (ll)(n); i++)
#define REP(i,k,n) for(ll i = k; i < (ll)(n); i++)
using namespace std;
int main(){
        int N;
        char S[300][300];
        char T[300][300];
        int ch['z'-'a'+1] = {};
        int odd_count = 0;
        int A,B;
        rep(i,N) rep(j,N){
                cin>>S[i][j];
                ch[S[i][j]]++;
        }
        rep(i,26){
                if(ch[i]%2==1) odd_count++;
        }
        if(odd_count>N || (N-odd_count)%2 == 1) {
                cout << 0 << endl;
                return 0;
        }



        rep(i,N) rep(j,N) T[(i+A%N)][(j+B)%N] = S[i][j];


        cout << res << endl;

        return 0;
}



/*

   3
   012
   103
   230

   baa
   aaa
   aba
   0,2


   aba
   baa
   aaa
   2,2




 */



奇数はN個だけ
