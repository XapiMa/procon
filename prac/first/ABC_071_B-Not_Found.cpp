#include <iostream>
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
using namespace std;
int main(){
        string s;
        bool bac['z'-'a'+1] = {};
        cin >> s;
        rep(i,s.size()) bac[s[i]-'a']=true;
        rep(i,'z'-'a'+1) if(!bac[i]) {
                cout << (char)('a'+ i) << endl;
                return 0;
        }
        cout << "None" << endl;
        return 0;
}
