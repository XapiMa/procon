#include <iostream>
#include <algorithm>
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i,k,n) for(int i = k; i < (int)(n); i++)
using namespace std;
int main(){
        int N;
        string s,t;
        cin >> N;
        cin>>s;
        cin>>t;
        int wrap = 0;
        REP(i,1,N+1){
                if(s.substr(N-1-i,i)  == t.substr(0,i)) wrap = i;
        }
        cout << 2*N-wrap  << endl;;

        return 0;
}
