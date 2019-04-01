#include <bits/stdc++.h>
using namespace std;

 enum{ Nothing , Barrier , Start, Goal, Failure = 100 };

 int d[] = {1, 0, -1, 0, 1};
 int result = Failure;

 int state[22][22];

 int dfs(int x, int y, int c){
    if (c > 10) return Failure; 

    for (int i = 0; i < 4; i++){
        int nx = x + d[i], ny = y + d[i+1];
        if (state[nx][ny] == Barrier) continue;

        while(state[nx][ny] == Nothing){
            nx += d[i], ny += d[i+1];
        }

        if (state[nx][ny] == Goal){
            return c+1;
        }else if (state[nx][ny] == Barrier){
            state[nx][ny] = Nothing;
            int temp = dfs(nx - d[i],ny - d[i+1], c+1);
            result = min(result, temp);
            state[nx][ny] = Barrier;
        }
    }
    return result;
 }

 int main(){
     while(1){
         int w,h;cin >> w >> h;
         if(w == 0 && h == 0)  break;

         result = Failure;
         int sx, sy;

         memset(state,-1,sizeof(state));
         
         for(int i = 1; i <= h; i++){
             for(int j = 1; j <= w; j++){
                 cin >> state[i][j];

                 if(state[i][j] == Start){
                     sx = i; sy = j;
                     state[i][j] = Nothing;
                 }
             }
         }
         int cnt = dfs(sx, sy, 0);
         if(cnt <= 10) cout << cnt << endl;
         else cout << -1 << endl;
     }
 }