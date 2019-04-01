#include <iostream>
#include <string>
using namespace std;
int main(){
        string s;
        cin >> s;
        int alpha['z'-'a'+1] = {};
        int len = s.length();
        for (size_t i = 0; i < len; i++) {
                alpha[s[i]-'a']++;
        }
        for (size_t i = 0; i < 'z'-'a'+1; i++) {
                if (alpha[i] > 1) {
                        cout << "no" << endl;
                        return 0;
                }
        }
        cout << "yes" << endl;

        return 0;

        char * array;

        array[2]
        *(array + 2)
        *(2 + array)
        2[array]

}
