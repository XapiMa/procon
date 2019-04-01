#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define REP(i,k,n) for(int i = k; i < (int)(n); i++)
typedef long long ll;

int main(){
        int N,K;
        int D[10] = {};
        int num;
        cin >> N >> K;
        rep(i,K){
                cin >> num;
                D[num]=1;
        }
        for(int i = N; i< 110000; i++) {
                int flag = 0;
                int pay = i;
                while(true) {
                        flag += D[pay % 10];
                        pay /= 10;
                        if (pay == 0) break;
                }
                if (flag == 0) {
                        cout << i << endl;
                        return 0;
                }
        }
        return 0;
}
