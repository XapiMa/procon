#include <iostream>
#include <algorithm>
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i,k,n) for(int i = k; i < (int)(n); i++)
using namespace std;
int main(){
        int A,B,AB,x,y;
        long ans = 5000*100000*2;
        cin >> A >> B >> AB >> x >> y;
        for (long ab = 0; ab <= 200000; ab+=2) {
                long a = x - ab/2;
                long b = y - ab/2;
                if(a<0) a=0;
                if(b<0) b=0;
                long cost = A*a + B*b + AB * ab;
                if(cost<ans) ans=cost;
        }
        cout << ans <<endl;
        return 0;
}
