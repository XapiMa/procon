#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
#define rep(i,N) for (int i = 0; i < (int)(N); i++)

const int MAX_N = 50;
bool used[MAX_N];
int perm[MAX_N];

void permutation1(int pos, int n){
        if(pos == n) {
                //ここから操作
                rep(i,n) printf("%d",perm[i]);
                puts("");
                //操作ここまで
                return;
        }
        rep(i,n){
                if(!used[i]) {
                        perm[pos] = i;
                        used[i] = true;
                        permutation1(pos + 1, n);
                        used[i] = false;
                }
        }
        return;
}

int perm2[MAX_N];

void permutation2(int n){
        rep(i,n){
                perm2[i] = i;
        } do {
                //ここから操作
                rep(i,n) printf("%d",perm2[i]);
                puts("");
                //操作ここまで
        } while(next_permutation(perm2,perm2+n));
        return;
}



int main(){
        puts("permutation1");
        permutation1(0,3);
        puts("permutation2");
        permutation2(3);

        return 0;
}
