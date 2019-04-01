#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <set>
#include <cstring>
#include <cmath>


#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define REP(i, k, n) for (int i = (int)(k); i < (int)(n); i++)
#define rrep(i, n) for (int i = (int)(n) - 1; i >= 0; i--)
#define rREP(i, k, n) for (int i = (int)(n) - 1; i >= k; i--)

#define debug(x) cerr <<#x << ": " << x << endl;

#define fi first
#define se second

#define vi vector<int>
#define pb push_back
#define mp make_pair

#define pcnt __builtin_popcount

typedef long long ll;
const ll inf = 900900900100100100;
const int MOD = (int)1e9 + 7;
const double EPS = 1e-9;
const int MID = 255;
using namespace std;


const int MAX_N = 1000000;
int prime[MAX_N + 10];
bool is_prime[MAX_N + 10];
int sieve(int n){
    int p = 0;
    rep(i,n + 1) is_prime[i] = true;
    is_prime[0] = is_prime[1] = false;
    REP(i,2,n + 1){
        if(is_prime[i]) {
            prime[p++] = i;
            for(int j = 2 * i; j <= n; j += i)
                is_prime[j] = false;
        }
    }
    return p;
}

int main(){
    int N,P;
    while(cin >> N >> P,N != -1) {
        int p = sieve(MAX_N);
        int k = 0;
        vector<int> pp;
        rep(i,p){
            if(prime[i] <= N) continue;
            int l = 0;
            REP(j,i,p){
                pp.pb(prime[i] + prime[j]);
                l++;
                if(l > P) break;
            }
            k++;
            if(k > P) break;
        }
        sort(pp.begin(),pp.end());
        // rep(i,P) debug(pp[i]);
        cout << pp[P - 1] << endl;
    }


    return 0;
}
