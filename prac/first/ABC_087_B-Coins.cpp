#include <iostream>

using namespace std;
int main(){
        int a,b,c,x;
        cin >> a >> b >> c >> x;
        int res = 0;
        for (size_t i = 0; i <= a; i++) {
                for (size_t j = 0; j <= b; j++) {
                        for (size_t k = 0; k <= c; k++) {
                                if(500*i + 100*j + 50*k == x) res++;
                        }
                }
        }
        cout << res << endl;

        return 0;
}
