// 3 1 = 3
// 3 4 = 3 4 5 7
// 10 20 = 10 11 12 13 14 15 16 17 18 19  21  23  25  27  29  31  32  34  35  37
// m以上の数しか存在しない世界に於ける素数を求め，n+1番目の素数を答える
//

#define MAX_PRIME 7368791 + 1
#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

int main(){
        int m, n;
        int * array;
        int search_range = sqrt(MAX_PRIME);
        int prime_index;
        array = (int *)malloc((MAX_PRIME+1) * sizeof(int));

        while(true) {
                cin >> m >> n;
                if(m == 0) return 0;
                for (size_t i = 0; i < MAX_PRIME; i++) {
                        array[i] = 1;
                }
                prime_index = 0;

                // エラトステネスの篩にかける
                for (size_t i = m; i <= search_range; i++) {
                        if(array[i]) {
                                prime_index++;
                                if(prime_index == (n + 1)) {
                                        break;
                                }
                                for (size_t j = 2; i * j < MAX_PRIME; j++) {
                                        array[i*j] = 0;
                                }
                        }
                }

                // 篩いにかけた後の数列からn+1番目の数字を見つける
                prime_index = 0;
                for (size_t i = m; i < MAX_PRIME; i++) {
                        if(array[i]) prime_index++;
                        if(prime_index == n+1) {
                                cout << i << endl;
                                break;
                        }
                }
        }
        free(array);
        return 0;
}
