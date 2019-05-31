#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define REP(i,k,n) for(int i = k; i < (int)(n); i++)
const int maxN = int(1e5+10);
int e[maxN]={},o[maxN]={};
int num[maxN]={};

const int limc = 1000+10;
int main(){
    int n,t;
    int minc = limc;
    cin >> n >> t;
    rep(i,n){
        int tc,tt;
        cin >> tc >> tt;
        if (tt <= t){
            if(tc < minc)minc=tc;
        }
    }
    if (minc == limc)cout << "TLE" << endl;
    else cout << minc << endl;
    return 0;
}
