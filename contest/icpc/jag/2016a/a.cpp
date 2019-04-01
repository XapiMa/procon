#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define REP(i,k,n) for(int i = k; i < (int)(n); i++)

#define vi vector<int>
#define pb push_back

typedef long long ll;
using namespace std;



int main(){
    int n;
    cin >> n;
    int cnt;
    string str;
    rep(i,n){
        cin >> str;
        if(str == "A") cnt++;
        else cnt--;
        if(cnt < 0) {
            cout << "NO" << endl;
            return 0;
        }
    }
    if(cnt == 0) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
