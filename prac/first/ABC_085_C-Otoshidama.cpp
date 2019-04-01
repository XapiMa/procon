#include <iostream>
using namespace std;
#define rep(i,N) for (long i = 0; i <=N; i++)
int main(){
        long N,Y; cin >> N >> Y;
        long k;
        rep(i,N) rep(j,N){
                k=Y/1000-10*i-5*j;
                if(i+j+k == N && i >=0 && j>=0 && k>=0) {
                        printf("%ld %ld %ld\n",i,j,k);;
                        return 0;
                }
        }
        cout << "-1 -1 -1" << endl;

        return 0;
}
