#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define REP(i,k,n) for(int i = k; i < (int)(n); i++)
typedef long long ll;

#define vi vector<int>
#define pb push_back


bool start[200010]={},goal[200010]={};
int main(){
    int n, m, a, b;
    cin >> n >> m;
    rep(i,m){
        cin >> a >> b;
        if (a == 1){
            start[b]=true;
        }
        if (b == n){
            goal[a]=true;
        }
    }
    rep(i,n+1){
        if (start[i] == true && goal[i] == true){
            cout << "POSSIBLE" << endl;
            return 0;
        }
    }
        cout << "IMPOSSIBLE" << endl;
        return 0;
}