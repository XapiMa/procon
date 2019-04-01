#include <iostream>
#include <algorithm>
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i,k,n) for(int i = k; i < (int)(n); i++)
using namespace std;
int main(){
        long long x,y,i;
        cin >> x >> y;
        i=0;
        while(true) {
                if(x>y) break;
                i++;
                x<<=1;
        }
        cout << i << endl;
        return 0;
}
