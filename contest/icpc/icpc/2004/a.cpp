#include <iostream>
#include <algorithm>
#include <vector>

#define rep(i,n) for(int i = 0; i < n; i++)
#define rrep(i,n) for(int i = n - 1; i >= 0; i--)
#define REP(i,k,n) for(int i = k; i < n; i++)

#define vi vector<int>
#define pb push_back
using namespace std;

int main(){
    int n,r;
    while(cin >> n >> r,n) {
        vi card(n,0);
        rep(i,n) card[i] = n - i;
        rep(i,r){
            int p,c;
            cin >> p >> c;
            vi tmp(c,0);
            rep(j,c) tmp[j] = card[p - 1 + j];
            rrep(j,p) card[j + c - 1] = card[j - 1];
            rep(j,c) card[j] = tmp[j];
        }
        cout << card[0] << endl;
    }
    return 0;

}
