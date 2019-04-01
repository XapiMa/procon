#include <iostream>
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i,k,n) for(int i = k; i < (int)(n); i++)
using namespace std;
int main(){
        int N, M;
        int a[50],b[50];
        int bac[50+1] =  {};
        cin >> N >> M;
        rep(i,M){
                cin >> a[i] >> b[i];
                bac[a[i]]++; bac[b[i]]++;
        }
        REP(i,1,N+1){
                cout << bac[i] << endl;
        }
        return 0;
}
