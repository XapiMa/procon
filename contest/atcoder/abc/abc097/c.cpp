#include <iostream>
#include <cmath>
#include <string>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
        string s; cin >> s;
        int k; cin >> k;
        set<string> sets;
        for(int i=0; i<s.size(); i++) {
                for(int j=1; j<s.size()-i+1; j++) {
                        sets.insert(s.substr(i,j));
                }
        }

        vector<string> ss(sets.begin(),sets.end());
        sort(ss.begin(),ss.end());
        cout << ss[k-1] << endl;
        return 0;
}
