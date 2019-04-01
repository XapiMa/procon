#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define REP(i,k,n) for(int i = k; i < (int)(n); i++)
typedef long long ll;
#define pb push_back

int main(){
        int N;
        int a[110];
        int sum, ave, ans;
        cin >> N;
        rep(i,N) cin >> a[i];
        sum = 0;
        rep(i,N) sum += a[i];
        ave = round((double)sum / N);
        ans = 0;
        rep(i,N) ans += pow((a[i] - ave),2);
        cout << ans << endl;

        return 0;
}
