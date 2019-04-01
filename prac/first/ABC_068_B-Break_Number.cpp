#include <iostream>
using namespace std;

int main(){
        int n;
        int res = 0;
        int tmp,count;
        int ans = 1;
        cin >> n;
        for(int i=1; i<=n; i++) {
                tmp = i;
                count = 0;
                while(tmp % 2 == 0) {
                        tmp /=2;
                        count++;
                }
                if(count > res) {
                        res = count;
                        ans = i;
                }
        }
        cout << ans << endl;
        return 0;
}
