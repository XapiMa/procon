#include <iostream>
#include <algorithm>
using namespace std;
int main(){
        int N;
        int a[100];
        int max_num,min_num;
        cin >> N;
        for (size_t i = 0; i < N; i++) {
                cin >> a[i];
        }
        max_num = a[0]; min_num = a[0];
        for (size_t i = 1; i < N; i++) {
                max_num = max(max_num,a[i]);
                min_num = min(min_num,a[i]);
        }
        cout << max_num - min_num << endl;

        return 0;
}
