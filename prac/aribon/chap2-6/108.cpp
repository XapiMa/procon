#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
using namespace std;
#define rep(i,N) for (int i = 0; i < (int)(N); i++)

int extgcd(int a, int b, int &x, int &y){
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }
    int d = extgcd(b, a % b, y, x);
    y -= a / b * x;
    return d;
}

int main(){
    int a,b;
    cin >> a >> b;
    int x,y;
    int gcd = extgcd(a,b,x,y);
    if(gcd != 1) {
        cout << -1 << endl;
        return 0;
    }
    int o1 = 0,o2 = 0,o3 = 0,o4 = 0;
    if(x > 0) o1 = x;
    else o2 = -1 * x;
    if(y > 0) o3 = y;
    else o4 = -1 * y;

    cout << o1 << " " << o2 << " " << o3 << " " << o4 << endl;

    return 0;
}
