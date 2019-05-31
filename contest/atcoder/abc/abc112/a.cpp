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
    if(n==1){
        cout << "Hello World" << endl;
    }else{
        int a,b;
        cin >> a >> b;
        cout << a+b << endl;
    }
    return 0;
}
