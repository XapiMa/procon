#include <cstdio>
#include <algorithm>
using namespace std;
#define rep(i,N) for (int i = 0; i < (int)(N); i++)
const int MAX_N = 50;

int n,m,k[MAX_N];

bool binary_search(int x){
        int l = 0, r = n;
        while(r - l >= 1) {
                int i = ( l + r ) / 2;
                if (k[i] == x) return true;
                else if (k[i] < x ) l = i+1;
                else r = i;
        }
        return false;
}

int main(){
        scanf("%d %d",&n,&m);
        rep(i,n){
                scanf("%d",&k[i]);
        }
        sort(k, k+n);

        bool f = false;

        rep(a,n)
        rep(b,n)
        rep(c,n)
        if(binary_search( m - (k[a]+k[b]+k[c]) )) f = true;

        if(f) puts("Yes");
        else puts("No");

        return 0;
}
