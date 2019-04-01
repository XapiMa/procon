#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define REP(i,k,n) for(int i = k; i < (int)(n); i++)

#define vi vector<int>
#define pb push_back

typedef long long ll;
using namespace std;



int main(){
    int n;
    while(cin >> n,n) {
        int up = 0,down = 0;
        int cnt = 0;
        rep(i,n){
            string tmp;
            getline(cin, tmp, ' ');
            cout << i << tmp << endl;
            if(tmp == "lu" || tmp == "ru") up++, down = 0;
            else if(tmp == "ld" || tmp == "rd") down++, up = 0;
            if(up == 2 || down == 2) cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}

// getline の挙動がおかしい
