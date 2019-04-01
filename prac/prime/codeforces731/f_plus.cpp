#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstring>
#define rep(i,N) for (int i = 0; i < (int)(N); i++)
using namespace std;
typedef long long ll;

const int MAXN = 400020;
ll num[MAXN]={},num_sum[MAXN]={};
bool prime[MAXN];

int main(){
        ll N;
        ll x = 0,mx = 0;
        cin >> N;
        memset(prime,false,sizeof(prime));

        for(ll i = 1; i <= N; i++) {
                cin >> x;
                num[x]++;
                prime[x] = true;
                mx = max(mx,x);
        }
        for(ll i = 0; i <= sqrt(mx); i++) {
                if(prime[i] == true) {
                        for(ll j = 2; i * j <= mx; j++) {
                                prime[i * j] = false;
                        }
                }
        }
        for(ll i = 1; i < MAXN; i++) num_sum[i] = num_sum[i-1] + num[i];

        ll ans = 0;

        for(ll i = 1; i <= mx; i++) {
                if(prime[i]==true) {
                        ll sum = 0;
                        for(ll j = i; j <= mx; j += i) {
                                sum += (num_sum[j+i-1] - num_sum[j-1]) * j;
                        }
                        ans = max(ans,sum);
                }
        }

        cout << ans << endl;

        return 0;
}
