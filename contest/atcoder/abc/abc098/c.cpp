#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <vector>
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define REP(i,k,n) for(int i = k; i < (int)(n); i++)
using namespace std;
int main(){
    int N;
    string S;
    cin >> N >> S;
    vector<int> csumE(N + 1,0);
    vector<int> csumW(N + 1,0);
    int e,w;
    REP(i,1,N + 1){
        if (S[i - 1] == 'E') {
            w = 0;
            e = 1;
        }else{
            w = 1;
            e = 0;
        }
        csumW[i] = csumW[i - 1] + w;
        csumE[i] = csumE[i - 1] + e;
    }
    int ans = N;
    // rep(i,N+1)
    // printf("i: %d, W: %d, E: %d\n",i,csumW[i],csumE[i]);
    REP(i,1,N + 1){
        ans = min(ans,((csumW[i - 1] - csumW[0]) + (csumE[N] - csumE[i + 1])));
    }
    cout << ans << endl;
    return 0;
}
