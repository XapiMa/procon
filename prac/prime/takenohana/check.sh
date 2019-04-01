#!/bin/bash/
cd $(dirname $0);
g++ -Wall -O2 -o solve solve.cpp
./solve < input.txt > output.txt
diff output.txt ans.txt
wile:; curl -s http://www.kansai-u.ac.jp/ > /dev/null
> /dev/null
