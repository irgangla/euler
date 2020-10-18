# Challenge 1

## Problem

If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.

## Solution

Check if number is dividable by 3 or 5 using the modulo operation, which returns the remainder of a division. If A % B = 0, then A is a multiple of B.

### C

gcc -Wall -pedantic -o one one.c

./run_time.sh "one/one 100000000"

real    0m0.583s
real    0m0.577s
real    0m0.583s
real    0m0.581s
real    0m0.574s
real    0m0.576s
real    0m0.576s
real    0m0.575s
real    0m0.580s
real    0m0.574s

### C++

g++ -Wall -pedantic -o one_cpp one.cpp

./run_time.sh "one/one_cpp 100000000"

real    0m0.607s
real    0m0.601s
real    0m0.596s
real    0m0.605s
real    0m0.607s
real    0m0.600s
real    0m0.603s
real    0m0.599s
real    0m0.605s
real    0m0.601s

### Python

./run_time.sh "python3 one/one.py 100000000"

real    0m17.881s
real    0m20.075s
real    0m20.023s
real    0m19.394s
real    0m19.196s
real    0m19.126s
real    0m18.856s
real    0m20.078s
real    0m19.962s
real    0m19.633s
