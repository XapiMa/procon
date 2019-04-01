#include <iostream>
using namespace std;
int main(){
        int n;
        int l[1000],r[1000];
        int sum=0;
        cin >> n;
        for(int i=0; i<n; i++) {
                cin >> l[i] >> r[i];
        }
        for (int i = 0; i < n; i++) {
                sum += r[i] - l[i] + 1;
        }
        cout << sum << endl;

        return 0;
}
