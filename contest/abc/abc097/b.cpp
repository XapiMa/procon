#include <iostream>
#include <cmath>
using namespace std;

int main(){
        int x; cin>>x;
        int maxnum = 1;
        for(int i = 2; i<sqrt(x); i++) {
                int j = i;
                for(; j*i<=x; j*=i) {}
                maxnum = max(maxnum,j);
        }
        cout << maxnum << endl;
        return 0;
}
