#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i,k,n) for(int i = k; i < (int)(n); i++)
using namespace std;

int main(){

        int n; cin>>n;
        vector<int> a(n); rep(i,n) cin>>a[i];
        sort(a.begin(),a.end());
        int mx = a.back();
        int mn = a.front();
        int neerM = mn;
        for (int i = 1; i < n-1; i++) {
                if(abs((double)mx/2 - a[i]) < abs((double)mx/2 - neerM)) neerM = a[i];
        }
        cout << mx << " " << neerM << endl;
        return 0;
}
