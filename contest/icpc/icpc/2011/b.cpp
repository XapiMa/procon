#include <bits/stdc++.h>

#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define rrep(i,n) for(int i = (int)(n) - 1; i >= 0; i--)
#define REP(i,k,n) for(int i = k; i < (int)(n); i++)

#define vi vector<int>
#define pb push_back
using namespace std;

int main(){
    string str;
    while(getline(cin, str),str != ".") {
        int mk = 0,kk = 0;
        bool flag = true;
        rep(i,(int)str.size()){
            if(str[i] == '(') mk++;
            else if (str[i] == ')') mk--;
            else if (str[i] == '[') kk++;
            else if (str[i] == ']') kk--;
            if(mk < 0 || kk < 0) flag = false;
        }
        if(flag) cout << "yes" << endl;
        else cout << "no" << endl;
    }
    return 0;

}

// ([)].
// こういうケースに対応
