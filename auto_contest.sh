#!/bin/bash
#echo -n ''
#for input do
#echo $input
#done

read input
mkdir $input

for i in A B C D E F;
do
    cp -r contest $input/
    mv $input/contest $input/$i
	#cp contest.py $input/$i/$i.py
	#touch $input/$i/test
    #touch $input/$i/brute.py
    #touch $input/$i/$i.cpp
    #touch $input/$i/gen.py
    #cp s.sh $input/$i/tester.sh

done
echo done

#find $input | sed -e "s/[^-][^\/]*\//  |/g" -e "s/|\([^ ]\)/|-\1/"
