#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define REP(i, k, n) for (int i = k; i < (int)(n); i++)
typedef long long ll;

#define vi vector<int>
#define pb push_back

bool start[200010] = {}, goal[200010] = {};
int main()
{
    string s;
    cin >> s;
    cout << s[0] << s.size() - 2 << s[s.size() - 1] << endl;
    return 0;
}