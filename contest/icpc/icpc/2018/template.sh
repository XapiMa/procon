#!/bin/bash

for i in a b c d e f g h
do
  cat << EOF > $i.cpp
#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define pb push_bask
#define mp make_pair
typedef long long ll;

int main(){
  ifstream in("${i}_in.txt");
  cin.edbuf(in.rdbuf());

  return 0;
}
EOF


for j in _in.txt _out.txt
do
  touch $i$j
done
done
