#!/usr/bin/env bash
for i in a b c d e f
do
  for j in .cpp _in.txt _out.txt
  do
    touch $i$j
  done done
