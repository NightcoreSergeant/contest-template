#!/bin/bash
make
for ((i=1;i>0;i++)) do
    echo $i
    #python3 gen.py > test
    ./gen.out > test
    diff -w <(./a.out < test) <(./brute.out < test) || break
    #diff -w <(python3 a.py < test) <(python3 brute.py < test) || break
done
