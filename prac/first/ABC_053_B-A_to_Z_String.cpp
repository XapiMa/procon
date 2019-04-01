#include <iostream>

using namespace std;
int main(){
        string s;
        int A_pos, Z_pos;
        cin >> s;
        int len = s.length();
        for (int i = 0; i < len - 1; i++) {
                if(s[i] == 'A') {
                        A_pos = i;
                        break;
                }
        }
        for (int i = len - 1; i > 0; i--) {
                if(s[i] == 'Z') {
                        Z_pos = i;
                        break;
                }
        }
        cout << Z_pos - A_pos + 1 << endl;
        return 0;
}
