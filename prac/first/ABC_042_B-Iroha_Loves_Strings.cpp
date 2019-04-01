#include <iostream>
#include <algorithm>
using namespace std;
int main(){
        int N, L;
        string S[100];
        cin >> N >> L;
        for (size_t i = 0; i < N; i++) {
                cin >> S[i];
        }
        sort(S,S+N);
        for (size_t i = 0; i < N; i++) {
                cout << S[i];
        }
        cout << endl;

        return 0;
}
