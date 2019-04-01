#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <set>
#include <cstring>
#include <cmath>
#include <stack>
using namespace std;

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

const int inf = 100100100;
const int MOD = (int)1e9 + 7;
const double EPS = 1e-9;

string rev(string S){

    rREP(i,1,S.size() - 1){
        sf += S[i];
    }
    return sa;
}

int main(   ){
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    string S;
    int lpos[85] = {≤};
    while(true) {
        cin >> S;
        if(S == ".") break;
        stack<int> st;
        int cl = 0,cr = 0, co = 0;
        rep(i,S.size()){
            if(S[i] == '[')
            {
                cl++;
                lpos[i] = true;
            }
            if(S[i] == ']')
            {
                cr++;

            }


        }

    }
    return 0;
}
