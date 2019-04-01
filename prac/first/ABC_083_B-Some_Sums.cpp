#include <iostream>
using namespace std;
int main(){
        int n,a,b;
        cin >> n >> a >> b;
        int total = 0;
        for (size_t i = 1; i <= n; i++) {
                int sum = 0;
                int tmp = i;
                while(tmp > 0) {
                        sum += tmp % 10;
                        tmp /=10;
                }
                if(a <= sum && sum <= b ) total+=i;
        }
        cout << total << endl;
        return 0;
}
