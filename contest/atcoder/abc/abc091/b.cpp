#include <iostream>
#include <map>
using namespace std;
#define rep(i,N) for(int i = 0; i<(int)(N); i++)

map<string,int> card;
int main(){
        int N,M;
        string s[100],t[100];
        cin>>N;
        rep(i,N){
                cin>>s[i];
                card[s[i]]++;
        }
        cin>>M;
        rep(i,M){
                cin >> t[i];
                card[t[i]]--;
        }
        int maxnum = 0;
        rep(i,N){
                maxnum = max(maxnum,card[s[i]]);
        }
        cout << maxnum << endl;

        return 0;
}
