#include <iostream>
#include <math.h>

using namespace std;
int main(){
        int n;
        int x[100],y[100];
        cin >> n;
        double max = 0;
        double len;
        for (size_t i = 0; i < n; i++) {
                cin >> x[i] >> y[i];
        }
        for (size_t i = 0; i < n; i++) {
                for (size_t j = i+1; j < n; j++) {
                        len = sqrt(pow(x[i] - x[j], 2) + pow(y[i] - y[j], 2));
                        if(len > max) max = len;
                }
        }
        cout << max << endl;
        return 0;
}
