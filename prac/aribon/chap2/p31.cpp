#include <cstdio>
#include <algorithm>
using namespace std;
#define rep(i,N) for (int i = 0; i < (int)(N); i++)

const int MAX_N = 50;
int memo[MAX_N];

int fib(int n){
        if(n <= 1) return n;
        if(memo[n] != 0) return memo[n];
        return memo[n] = fib(n - 1) + fib(n - 2);
}

int main(){
        printf("%d",fib(40));
        return 0;
}
