#include <bits/stdc++.h>
using namespace std;


int N, S, cnt;
void dfs(int d, int r, int c){
    cout << d  << " " << r << " " << c << " " << endl;
    if(d == 10 || c == N+1) return;
    if(r - d == 0){
        cnt++;
        return;
    }
    dfs(d+1, r-d, c+1);
    dfs(d+1,r,c);
    }
    return;
}

int main(){
    while(cin >> N >> S){
        if(N == 0 && S == 0) break;

        cnt = 0;
        dfs(0,S,0);
        cout << cnt << endl;
    }
    return 0;
}