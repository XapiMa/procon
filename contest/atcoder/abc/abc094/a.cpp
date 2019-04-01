#include <iostream>
#include <algorithm>
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i,k,n) for(int i = k; i < (int)(n); i++)
using namespace std;
int main(){

        int a,b,x; cin>>a>>b>>x;
        string ans ="NO";
        if(x-a <= b and x >= a) ans="YES";
        cout << ans << endl;
        return 0;
}
