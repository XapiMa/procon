#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i,k,n) for(int i = k; i < (int)(n); i++)
using namespace std;

int main(){
        int A,B,K;
        cin >> A >> B >> K;
        for (int i = A; i <= B; i++) {
                if(A+K-1 < i && i < B-K+1) continue;
                cout << i << endl;
        }
        return 0;

}
