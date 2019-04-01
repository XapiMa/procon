#include <cstdio>
#include <algorithm>
using namespace std;
#define rep(i,N) for (int i = 0; i < (int)(N); i++)

int fib(int n){
        if(n <= 1) return n;
        return fib(n - 1) + fib(n - 2);
}

int main(){
        printf("%d",fib(40));
        return 0;
}
