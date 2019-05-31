#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i, k, n) for(int i = k; i < (int)(n); i++)
typedef long long ll;

#define vi vector<int>
#define pb push_back

int main() {
    int n, tmp, i0 = 0, i1 = 0, i2 = 0;
    cin >> n;
    rep(i, n) {
        cin >> tmp;
        int m2 = 0;
        for(m2; tmp % 2 == 0; m2++)
            tmp /= 2;
        if(m2 == 0)
            i0++;
        else if(m2 == 1)
            i1++;
        else
            i2++;
    }
    // string ans = "Yes";
    // if(i0 == 0)
    //     ;
    // else if(i1 == 0 && i0 - 1 <= i2)
    //     ;
    // else if(i1 != 0 && i0 <= i2)
    //     ;
    // else
    //     ans = "No";


    if (i1 !=0)i0++;
    string ans = "Yes";
    if (i0 - 1 <= i2)
        ;
    else
        ans = "No";

    cout << ans << endl;
    return 0;
}