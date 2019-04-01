#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define REP(i,k,n) for(int i = k; i < (int)(n); i++)
typedef long long ll;

int main(){
        int N,L;
        vector<string> vS;
        string tmpS;
        cin >> N >> L;
        rep(i,N){
                cin >> tmpS;
                vS.push_back(tmpS);
        }
        sort(vS.begin(),vS.end());
        rep(i,N){
                cout << vS[i];
        }
        cout << endl;
        return 0;
}
