#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

#define rep(i,n) for(int i = 0; i < n; i++)
#define rrep(i,n) for(int i = n - 1; i >= 0; i--)
#define REP(i,k,n) for(int i = k; i < n; i++)

#define vi vector<int>
#define pb push_back
using namespace std;


map<int, int> prime_factor(int n){
    map<int, int> res;
    for(int i = 6; i * i <= n; i++) {
        if(i % 7 == 1 || i % 7 == 6) {
            while(n % i == 0) {
                res[i] = 1;
                n /= i;
            }
        }
    }
    if(n != 1 && (n % 7 == 1 || n % 7 == 6)) res[n] = 1;
    return res;
}

int main(){
    int n;
    while(cin >> n, n != 1) {
        map<int,int> res = prime_factor(n);
        cout << n << ":";
        for(auto itr = res.begin(); itr != res.end(); itr++) {
            cout << " " << itr->first;
        }
        cout << endl;
    }



    return 0;

}
