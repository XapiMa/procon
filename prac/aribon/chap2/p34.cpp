#include <cstdio>
#include <queue>
using namespace std;
#define rep(i,N) for (int i = 0; i < (int)(N); i++)

const int MAX_N = 100000000;
int a[MAX_N];
int n,k;

bool dfs(int i, int sum){
        if(i == n) return sum == k;

        if(dfs(i+1, sum)) return true;
        if(dfs(i+1, sum+a[i])) return true;

        return false;
}

int main(){
        scanf("%d", &n);
        rep(i,n) scanf("%d",&a[i]);
        scanf("%d", &k);

        if(dfs(0,0)) puts("Yes");
        else puts("No");

        return 0;
}
