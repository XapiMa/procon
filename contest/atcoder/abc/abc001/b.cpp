#include <iostream>
#include <algorithm>
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i,k,n) for(int i = k; i < (int)(n); i++)
using namespace std;
int main(){

        double m;
        cin >> m;
        int ans = 0;
        double k = m/1000;
        if (k<0.1) ans = 0;
        else if(k<=5) ans = k*10;
        else if(k<=30) ans = k+50;
        else if(k<=70) ans = (k-30)/5+80;
        else ans = 89;
        if (ans<10) cout << 0;
        cout << (int)ans << endl;

        return 0;
}
