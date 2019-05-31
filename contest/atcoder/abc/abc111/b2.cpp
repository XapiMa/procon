#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define REP(i,k,n) for(int i = k; i < (int)(n); i++)

int main(){
    int n;
    cin >> n;
    int t = n/111;
    if( n%111 != 0 ) t++;
    cout << t*111 << endl;
    return 0;
}
