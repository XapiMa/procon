#pragma warning(disable:4786)
#include <stdio.h>
#include <set>
using namespace std;
// デバグ用プリント
void Print(set<int> &rseti) {
    for (set<int>::iterator iti = rseti.begin(); iti != rseti.end(); iti++) { printf("%3d ", *iti); }
    printf("\n");
}
// 和集合の計算
template<class T> set<T> Union(set<T> &rsettA, set<T> &rsettB) {
    set<T> settUnion(rsettA);
    for (set<T>::iterator itt = rsettB.begin(); itt != rsettB.end(); itt++) {
        settUnion.insert(*itt);
    }
    return settUnion;
}
// 積集合の計算
template<class T> set<T> Product(set<T> &rsettA, set<T> &rsettB) {
    set<T> settProduct;
    for (set<T>::iterator itt = rsettB.begin(); itt != rsettB.end(); itt++) {
        if (rsettA.find(*itt) != rsettA.end()) {
            settProduct.insert(*itt);
        }
    }
    return settProduct;
}
// 補集合の計算
template<class T> set<T> Complement(set<T> &rsettA, set<T> &rsettB) {
    set<T> settComplement(rsettA);
    for (set<T>::iterator itt = rsettB.begin(); itt != rsettB.end(); itt++) {
        settComplement.erase(*itt);
    }
    return settComplement;
}
int main() {
    // 集合 A を用意する。
    set<int> setiPoolA; {
        setiPoolA.insert(2);
        setiPoolA.insert(3);
        setiPoolA.insert(4);
        Print(setiPoolA);
    }
    // 集合 B を用意する。
    set<int> setiPoolB; {
        setiPoolB.insert(2);
        setiPoolB.insert(5);
        setiPoolB.insert(1);
        Print(setiPoolB);
    }
    // 和集合、積集合、補集合を計算する。
    set<int> setiUnion      = Union     (setiPoolA, setiPoolB); // A + B
    set<int> setiProcduct   = Product   (setiPoolA, setiPoolB); // A * B
    set<int> setiComplement = Complement(setiPoolA, setiPoolB); // A - B
    // プリントしてみる。
    Print(setiUnion     );
    Print(setiProcduct  );
    Print(setiComplement);
    return 0;
}
