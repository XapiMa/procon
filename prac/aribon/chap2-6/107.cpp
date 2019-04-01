#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
using namespace std;
#define rep(i,N) for (int i = 0; i < (int)(N); i++)

int gcd(int a, int b){
    if(b == 0) return a;
    return gcd(b,a % b);
}

int main(){
    int px1,py1,px2,py2;
    cin >> px1 >> py1 >> px2 >> py2;
    cout <<  gcd(abs(px1 - px2),abs(py1 - py2)) - 1 << endl;
    return 0;
}
