#include <iostream>
#include <algorithm>
#include <cmath>

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i,k,n) for(int i = k; i < (int)(n); i++)
using namespace std;
int main(){

        int A,B,C,K;
        cin >> A >> B >> C >> K;
        int maxnum = max(max(A,B),C);
        cout << maxnum * pow(2,K) + A+B+C-maxnum << endl;
        return 0;
}
