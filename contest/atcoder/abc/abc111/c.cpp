#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define REP(i,k,n) for(int i = k; i < (int)(n); i++)
const int maxN = int(1e5+10);
int e[maxN]={},o[maxN]={};
int num[maxN]={};

int main(){
    int n;
    cin >> n;
    rep(i,n){
        cin >> num[i];
        if(i%2==0){
            e[num[i]]++;
        }else{
            o[num[i]]++;
        }
    }
    int men=0,mev=0,mon=0,mov=0;
    rep(i,maxN){
        if(e[mev] < e[i]) men = i , mev = e[i];
        if(o[mov] < o[i]) mon = i , mov = o[i];
    }
    sort(e, e+maxN, greater<int>() );
    sort(o, o+maxN, greater<int>() );

    if (men != mon) cout << n-e[0]-o[0] << endl;
    else cout << min(n-e[0]-o[1],n-e[1]-o[0]) << endl;
    return 0;
}
