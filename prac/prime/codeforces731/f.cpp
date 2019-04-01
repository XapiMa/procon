#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstring>
#define rep(i,N) for (int i = 0; i < (int)(N); i++)
using namespace std;


int main(){
        int N,a[200000];
        bool p[200000];
        cin >> N;

        rep(i,N){
                cin >> a[i];
        }
        sort(a,a+N);

        memset(p,true,sizeof(p));

        for(int i = 0; a[i] < sqrt(a[N-1]); i++) {
                if(p[a[i]] == true) {
                        for(int j = 2; a[i] * j < a[N-1]; j++) {
                                p[a[i]*j] = false;
                        }
                }
        }
        int ans = 0;
        for(int i = 0; i < N; i++) {
                if(p[a[i]] == true) {
                        if(i!=0 && a[i-1] == a[i]) continue;
                        int sum = a[i];
                        for(int j = i+1; j<N; j++) {
                                sum += a[j] - (a[j] % a[i]);
                        }
                        ans = max(ans,sum);
                }
        }
        cout << ans << endl;

        return 0;
}
