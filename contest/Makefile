CC = g++
FLAGS = -std=c++17 -fno-asm -Wall -Wextra -pedantic -O2 -lm
files = a.out brute.out gen.out


install : a.out brute.out gen.out

a.out: a.cpp
	$(CC) $(FLAGS) a.cpp -o a.out

brute.out: brute.cpp
	$(CC) $(FLAGS) brute.cpp -o brute.out

gen.out: gen.cpp
	$(CC) $(FLAGS) gen.cpp -o gen.out

clear :
	rm -f $(files)