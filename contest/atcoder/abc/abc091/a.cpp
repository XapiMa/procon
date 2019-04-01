#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i,k,n) for(int i = k; i < (int)(n); i++)
using namespace std;

int main(){
        int A,B,C; cin>>A>>B>>C;
        string ans ="No";
        if(A+B>=C) ans="Yes";
        cout << ans << endl;

        return 0;

}
