#include <iostream>
#define rep(i,N) for (int i = 0; i < N; i++)
using namespace std;

int main(){
        string s;
        cin >> s;
        int count = 0;
        rep(i,3) if(s[i] == 'o') count++;
        cout << 700 + 100*count << endl;
        return 0;
}
