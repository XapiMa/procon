#include <iostream>
using namespace std;
int main(){
        int a,b;
        cin >> a >> b;
        int array[5];
        int ans=0;
        for (size_t i = a; i <= b; i++) {
                int tmp = i;
                for (size_t j = 0; j < 5; j++) {
                        array[j] = tmp%10;
                        tmp/=10;
                }
                if(array[0]==array[4]&&array[1]==array[3]) ans++;
        }
        cout << ans << endl;

        return 0;
}
