#include <iostream>
#include <algorithm>
#include <cmath>
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i,k,n) for(int i = k; i < (int)(n); i++)
using namespace std;
int main(){
        int n; cin >> n;
        long long a[100000]; rep(i,n) cin>>a[i];
        bool zeroFlag = false;
        long long costA = 0, costB = 0;

        long long sum = 0, prev=0;

        if(a[0]==0) {
                a[0]=1;
                costA+=1;
                zeroFlag = true;
        }
        rep(i,n){
                prev = sum;
                sum += a[i];
                if(i==0) continue;
                if((prev*sum) < 0) continue;
                if(prev<0) {
                        costA+= abs(sum-1);
                        sum = 1;
                }else{
                        costA+= abs(sum+1);
                        sum = -1;
                }

        }


        if(zeroFlag) {
                a[0]=-1;
                costB+=1;
        }else{
                long long a0 = a[0];
                a[0]= -1* a[0]/abs(a[0]);
                costB+=(abs(a0)+1);
        }

        sum = 0; prev = 0;
        rep(i,n){
                prev = sum;
                sum += a[i];
                if(i==0) continue;
                if((prev*sum) < 0) continue;
                if(prev<0) {
                        costB+= abs(sum-1);
                        sum = 1;
                }else{
                        costB+= abs(sum+1);
                        sum = -1;
                }
        }

        cout << min(costA,costB) << endl;

        return 0;
}
