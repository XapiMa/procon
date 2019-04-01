#include <iostream>
#include <map>
#include <algorithm>
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i,k,n) for(int i = k; i < (int)(n); i++)
using namespace std;
int main(){
        int N,tmp;
        int odd=0,even=0;
        cin >> N;
        rep(i,N){
                cin>>tmp;
                if(tmp%2==0) even++;
                else odd++;
        }
        string ans = "YES";
        if (odd%2 != 0) ans = "NO";

        cout << ans << endl;
        return 0;
}
