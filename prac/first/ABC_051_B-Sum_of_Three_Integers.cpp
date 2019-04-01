#include <iostream>
#include <string>
using namespace std;
int main(){
        int k, s;
        int x, y, z;
        int ans = 0;
        cin >> k >> s;
        for (x = 0; x <= k; x++) {
                for (y = 0; y <= k; y++) {
                        int z = s - x - y;
                        if(z >= 0 && z <= k) {
                                ans++;
                        }
                }
        }
        cout << ans << endl;
        return 0;
}
