#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define REP(i,k,n) for(int i = k; i < (int)(n); i++)
typedef long long ll;
#define pb push_back


ll f(ll b, ll n){
        if(n < b) return n;
        ll s = 0, x = n;
        while(x) {
                s += x%b;
                x /= b;
        }
        return s;
}

ll solv(ll n, ll s){

        if(n < s) return -1;

        // n < b の場合
        if(s == n) return s+1;

        // 3桁以上
        // b^2 < n   =>   b < sqrt(n) の場合
        // 全探索で間に合う
        for(ll b = 2; b*b <= n; b++) {
                if(f(b,n) == s) return b;
        }

        // 2桁のとき
        // b <= n < b^2   =>   sqrt(n) < b の場合
        // pb+q = n
        // p + q = s
        // b = (n - s)/p + 1
        // pを探せば良い
        // b = (n - s)/p + 1  より， pは(n - s)の約数
        // 本来は約数の一覧を用意するべきだがめんどくさがってTLEになっている
        for(ll p = s; n < pow((n - s)/p + 1,2); p-- ) {
                if((n-s) % p != 0) continue;
                ll b = (n - s)/p + 1;
                // b > q なので
                // p + q = s より
                // b > s - p
                if(b <= s - p) continue;

                // cout << " b:" << b << " n:" << n << " f(b,n):" << f(b,n) << endl;
                if(f(b,n) == s) return b;
        }

        // 見つからなかった場合
        return -1;
}

int main(){
        ll n,s;
        cin >> n >> s;
        cout << solv(n,s) << endl;
        return 0;
}
