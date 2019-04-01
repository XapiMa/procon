#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#define MAXNUM 55555
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i,k,n) for(int i = k; i < (int)(n); i++)
using namespace std;
int nums[MAXNUM+1];
int main(){
        int N;
        cin >> N;

        for(int i = 0; i <= MAXNUM; i++) {
                nums[i] = 1;
        }
        for(int i = 2; i < sqrt(MAXNUM); i++) {
                if(nums[i]) {
                        for(int j = 0; i * (j + 2) <= MAXNUM; j++) {
                                nums[i *(j + 2)] = 0;
                        }
                }
        }
        int j = 0;
        for (int i = 2; i <= MAXNUM; i++) {
                if(nums[i]) {
                        if(i%5 == 1) {
                                cout << i << " ";
                                j++;
                                if(j>=N) break;
                        }
                }

        }
        cout << endl;

        return 0;
}
