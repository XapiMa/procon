#include <cstdio>
#include <stack>
using namespace std;
#define rep(i,N) for (int i = 0; i < (int)(N); i++)

const int MAX_N = 50;
int memo[MAX_N];

int main(){
        stack<int> s;
        s.push(1);
        s.push(2);
        s.push(3);
        printf("%d\n",s.top());
        s.pop();
        printf("%d\n",s.top());
        s.pop();
        printf("%d\n",s.top());
        s.pop();

        return 0;
}
