#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i,k,n) for(int i = k; i < (int)(n); i++)
using namespace std;

int main(){
        int A[3];
        cin >> A[0] >> A[1] >> A[2];
        sort(A,A+3);
        int cost = 0;
        cost+=A[2]-A[1];
        int tmp = A[1]-A[0];
        if(tmp%2==0) cost+=tmp/2;
        else cost+= tmp/2 + 2;
        cout << cost << endl;

        return 0;

}
