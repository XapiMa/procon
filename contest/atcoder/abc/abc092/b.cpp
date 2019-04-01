#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i,k,n) for(int i = k; i < (int)(n); i++)
using namespace std;

int main(){
        int N,D,X,A[100];
        cin >> N >> D >> X;
        rep(i,N) cin>>A[i];
        int eat = 0;
        rep(i,N){
                int day = 0;
                int j = 0;
                while(true) {
                        day = j*A[i]+1;
                        if(day > D) break;
                        eat++;
                        j++;
                }
        }

        cout << eat + X << endl;

        return 0;

}
