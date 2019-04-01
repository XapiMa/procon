#define rep(i,N) for (int i = 0; i < N; i++)

#include <iostream>
#include <algorithm>
using namespace std;

int main(){
        int N,X;
        int m[100];
        int minn = 2000;
        int sum = 0;
        cin >> N >> X;
        rep(i,N) cin >> m[i];
        rep(i,N) minn = min(minn,m[i]);
        rep(i,N) sum += m[i];
        cout << (X-sum)/minn + N << endl;

        return 0;
}
