#!/bin/bahs

for i in a b c d e f
do
cat << EOF  > $i.cpp
#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i = 0; i < n; i++)
#define REP(i,k,n) for(int i = k; i < n; i++)

#define vi vector<int>
#define pb push_back
#define mp make_pair
typedef long long ll;

int main(){
  ifstream in("${i}_in.txt");
  cin.rdbuf(in.rdbuf());

  return 0;
}
EOF

for j in _in.txt _out.txt
do
  touch $i$j
done
done
