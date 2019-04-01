#include <cstdio>
#include <algorithm>
#define rep(i,N) for (int i = 0; i < (int)(N); i++)
#define REP(i,k,N) for (int i = k; i < (int)(N); i++)
const int MAX_N = 100;
using namespace std;

int main(){
        int n,a[MAX_N];
        scanf("%d",&n);
        rep(i,n){
                scanf("%d",&a[i]);
        }
        int ans = 0;
        rep(i,n)
        REP(j,i+1,n)
        REP(k,j+1,n){
                int len = a[i]+a[j]+a[k];
                int ma = (max(a[i],max(a[j],a[k])));
                if(ma < len - ma) {
                        ans = max(ans,len);
                }
        }

        printf("%d\n",ans);

        return 0;
}
