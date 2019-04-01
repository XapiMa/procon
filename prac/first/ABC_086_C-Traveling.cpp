#include <iostream>
#include <map>
#include <algorithm>
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i,k,n) for(int i = k; i < (int)(n); i++)
using namespace std;
int main(){
        int N,t[100010],x[100010],y[100010];
        cin >> N;
        t[0]=x[0]=y[0]=0;
        rep(i,N){
                cin>>t[i+1]>>x[i+1]>>y[i+1];
        }
        string ans = "Yes";
        rep(i,N){
                int dt = t[i+1]-t[i];
                int dist = abs(x[i+1]-x[i])+abs(y[i+1]-y[i]);
                if(dt < dist) ans="No";
                if(dt%2!=dist%2) ans="No";
        }
        cout << ans << endl;
        return 0;
}
