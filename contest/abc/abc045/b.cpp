#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define REP(i,k,n) for(int i = k; i < (int)(n); i++)
typedef long long ll;

#define vi vector<int>
#define pb push_back

int main(){
        string sa, sb, sc;
        int ia, ib, ic;
        cin >> sa >> sb >> sc;
        ia = ib = ic = 0;
        char c = sa[ia];
        char last = 'A';
        ia++;
        while(true) {
                switch(c) {
                case 'a':
                        c = sa[ia];
                        last = 'A';
                        ia++;
                        break;
                case 'b':
                        c = sb[ib];
                        last = 'B';
                        ib++;
                        break;
                case 'c':
                        c = sc[ic];
                        last = 'C';
                        ic++;
                        break;
                case '\0':
                        cout << last << endl;
                        return 0;
                        break;
                }
        }
        return 0;
}
