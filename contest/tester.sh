#!/bin/bash
#g++ a.cpp -o a.out
#g++ brute.cpp -o brute.out
#g++ gen.cpp -o gen.out
for ((i=1;i>0;i++)) do
    echo $i
    #python3 gen.py > test
    ./gen.out > test
    diff -w <(./a.out < test) <(./brute.out < test) || break
    #diff -w <(python3 a.py < test) <(python3 brute.py < test) || break
done
