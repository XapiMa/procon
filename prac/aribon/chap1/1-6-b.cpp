#include <cstdio>
#include <algorithm>
#define rep(i,N) for (int i = 0; i < (int)(N); i++)
#define REP(i,k,N) for (int i = k; i < (int)(N); i++)
using namespace std;

const int MAX_N = 1000000;

int main(){
        int L,n,x[MAX_N];
        scanf("%d %d",&L, &n);
        rep(i,n){
                scanf("%d",&x[i]);
        }
        int mint=0,maxt=0;
        rep(i,n){
                mint = max(mint,min(x[i],L-x[i]));
                maxt = max(maxt,max(x[i],L-x[i]));
        }
        printf("min = %d\n",mint);
        printf("max = %d\n",maxt);

        return 0;
}
