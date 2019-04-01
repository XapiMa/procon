#include <iostream>
using namespace std;

int main(){
        int N;
        int d[100];

        cin >> N;
        for (size_t i = 0; i < N; i++) {
                cin >> d[i];
        }


        int num[100+1]={};
        for (size_t i = 0; i < N; i++) {
                num[d[i]]++;
        }

        int res = 0;
        for (size_t i = 1; i <= 100; i++) {
                if(num[i]) res++;
        }

        cout << res << endl;

        return 0;
}
