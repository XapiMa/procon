#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define REP(i,k,n) for(int i = k; i < (int)(n); i++)
typedef long long ll;
#define pb push_back

int main(){
        string w;
        int sCount['z' - 'a' + 1] = {};
        cin >> w;
        rep(i,w.length()){
                sCount[w[i]-'a']++;
        }
        rep(i,'z' - 'a' + 1){
                if(sCount[i] % 2 == 1) {
                        cout << "No" << endl;
                        return 0;
                }
        }

        cout << "Yes" << endl;
        return 0;
}
