#include <cstdio>
#include <algorithm>
using namespace std;
#define rep(i,N) for (int i = 0; i < (int)(N); i++)

int fact(int n){
        if(n == 0) return 1;
        return n * fact(n - 1);
}

int main(){
        printf("%d",fact(4));
        return 0;
}
