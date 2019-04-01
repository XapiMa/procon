#include <iostream>
#include <vector>
#include <cmath>
#include <cstdio>
typedef long long ll;
#define rep(i,N) for (int i = 0; i < (int)(N); i++)
using namespace std;

const int MAX_N = 1000;

void comb(vector<vector <long long int> > &v);
void comb_p(vector<vector <double> > &v);
double solve();

int main(){
    printf("%.10lf\n",solve());
    return 0;
}

double solve(){
    vector<vector<double> > v(MAX_N + 1,vector<double>(MAX_N + 1,0));
    comb_p(v);
    // nCk = v[n][k];

    ll N,D,X,Y;
    cin >> N >> D >> X >> Y;

    if(X % D != 0 || Y % D != 0) return 0;
    X /= D,Y /= D,D /= D;

    // cout << "D:" << D << ", X:" << X << ", Y:" << Y << endl;
    int x = abs(X / D), y = abs(Y / D);
    int d = N - x - y;
    // cout << "d:" << d << endl;
    if(d < 0 || d % 2 != 0) return 0;
    int m = d / 2;
    double count = 0;
    rep(i,m + 1){
        count += v[N][x + 2 * (m - i)] * v[x + 2 * (m - i)][m - i] * v[y + 2 * i][i];
    }
    // cout << "count:" <<  count << endl;
    // cout << "pow:" << pow(4,N) << endl;
    return count;
}

void comb(vector<vector <long long int> > &v){
    for(int i = 0; i < v.size(); i++) {
        v[i][0] = 1;
        v[i][i] = 1;
    }
    for(int k = 1; k < v.size(); k++) {
        for(int j = 1; j < k; j++) {
            v[k][j] = (v[k - 1][j - 1] + v[k - 1][j]);
        }
    }
}
void comb_p(vector<vector <double> > &v){
    v[0][0] = 1.0;
    for(int i = 1; i < v.size(); i++) {
        v[i][0] = v[i - 1][0] / 2;
        v[i][i] = v[i - 1][i - 1] / 2;
    }
    for(int k = 1; k < v.size(); k++) {
        for(int j = 1; j < k; j++) {
            v[k][j] = (v[k - 1][j - 1] / 2 + v[k - 1][j] / 2);
        }
    }
}

// 1 200416616 - 430405070 - 79858930

// 1000 1000000 -500000000 500000000
// 1000 1000000 0 -1000000000
