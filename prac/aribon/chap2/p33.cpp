#include <cstdio>
#include <queue>
using namespace std;
#define rep(i,N) for (int i = 0; i < (int)(N); i++)

const int MAX_N = 50;
int memo[MAX_N];

int main(){
        queue<int> que;
        que.push(1);
        que.push(2);
        que.push(3);
        printf("%d\n",que.front());
        que.pop();
        printf("%d\n",que.front());
        que.pop();
        printf("%d\n",que.front());
        que.pop();

        return 0;
}
