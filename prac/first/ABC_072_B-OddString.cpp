#include <iostream>
#include <string>
using namespace std;
int main(){
        string s;
        cin >> s;
        int len = s.length();
        for (int i = 0; i < len; i+=2) {
                cout << s[i];
        }
        cout << endl;
        return 0;
}
