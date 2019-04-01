#include <iostream>
#include <algorithm>
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i,k,n) for(int i = k; i < (int)(n); i++)
using namespace std;
int main(){
        int A,B,C,D,E,F;
        cin>>A>>B>>C>>D>>E>>F;
        pair<int,int> ans = make_pair(100*A,0);
        double par = 0;
        for (int a = 0; 100*A*a <= F; a++) {
                for (int b = 0; 100*A*a + 100*B*b <= F; b++) {
                        int W = (A*a+B*b)*100;
                        int SMax = (A*a+B*b)*E;
                        for (int c = 0; W + C*c <= F; c++) {
                                for (int d = 0; W + C*c+D*d <= F; d++) {
                                        int S = C*c+D*d;
                                        if(W+S == 0) continue;
                                        if (W + S <= F && S<=SMax) {
                                                if(par < (double)S/(W+S)) {
                                                        ans = make_pair(W+S,S);
                                                        par = (double)S/(W+S);
                                                }
                                        }
                                }
                        }
                }
        }
        cout << ans.first << " " << ans.second << endl;

        return 0;
}
