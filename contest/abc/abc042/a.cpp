#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define REP(i,k,n) for(int i = k; i < (int)(n); i++)
typedef long long ll;

int main(){
        int a,b,c;
        cin >> a >> b >> c;
        int five = 0, seven = 0;
        if( a == 5 ) {five++;} else if( a == 7 ) {seven++;}
        if( b == 5 ) {five++;} else if( b == 7 ) {seven++;}
        if( c == 5 ) {five++;} else if( c == 7 ) {seven++;}
        if(five == 2 && seven == 1) {cout << "YES" << endl;}
        else{cout << "NO" << endl;}
        return 0;
}
