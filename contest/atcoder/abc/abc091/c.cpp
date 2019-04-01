#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i,k,n) for(int i = k; i < (int)(n); i++)
using namespace std;


// 後にする
// ペアにできるもののうち，x,y共に最も小さいものを選ぶべき．

int main(){
        int N; cin>>N;
        vector<pair<int,int> > ab(N),cd(N);
        int f,s;
        rep(i,N){
                cin>>f>>s;
                ab[i]=make_pair(f,s);
        }
        rep(i,N){
                cin>>f>>s;
                cd[i]=make_pair(f,s);
        }
        sort(ab.begin(),ab.end());
        sort(cd.begin(),cd.end(),[](pair<int,int> &left, pair<int,int> &right){
                return left.second < right.second;
        });
        int k=0;
        rep(i,N){
                rep(j,N-k){
                        if(ab[i].first < cd[j].first) {
                                if(ab[i].second < cd[j].second) {
                                        k++;
                                        cd.erase(cd.begin()+j);
                                        break;
                                }
                        }
                }

        }
        cout << k << endl;

        return 0;

}
