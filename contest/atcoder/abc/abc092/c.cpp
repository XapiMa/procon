#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i,k,n) for(int i = k; i < (int)(n); i++)
using namespace std;

int main(){
        int N,A[100000+2];
        int diff[100000+2];
        cin >> N;
        REP(i,1,N+1) cin>>A[i];
        A[0]=0; A[N+1]=0;
        int sum = 0;
        REP(i,1,N+1){
                sum+=abs(A[i-1]-A[i]);
                diff[i]=abs(A[i-1]-A[i])+abs(A[i]-A[i+1])-abs(A[i-1]-A[i+1]);
        }
        sum+=abs(A[N]-A[N+1]);
        REP(i,1,N+1){
                cout << sum-diff[i] << endl;
        }

        return 0;

}
