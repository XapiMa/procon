#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define REP(i,k,n) for(int i = k; i < (int)(n); i++)
typedef long long ll;

int main(){
        int a,b;
        char op;
        cin >> a >> op >> b;
        if(op == '-') cout << a-b << endl;
        else cout << a+b << endl;
        return 0;
}
