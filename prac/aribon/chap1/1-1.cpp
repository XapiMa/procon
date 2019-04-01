#include <cstdio>
#define rep(i,N) for (int i = 0; i < (int)(N); i++)
const int MAX_N = 50;

int main(){
        int n,m,k[MAX_N];
        scanf("%d %d",&n,&m);
        rep(i,n){
                scanf("%d",&k[i]);
        }

        bool f = false;

        rep(a,n)
        rep(b,n)
        rep(c,n)
        rep(d,n)
        if(k[a]+k[b]+k[c]+k[d] ==  m) f = true;

        if(f) puts("Yes");
        else puts("No");

        return 0;
}
