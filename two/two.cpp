#include <iostream>

#define LIMIT 4000000

using namespace std;

int main(int argc, char **argv) {
    unsigned int minus_one, minus_two, current;
    unsigned long sum;

    minus_two = 1;
    minus_one = 2;
    current = 3;
    sum = 2;

    while(current <= LIMIT) {
        minus_two = minus_one;
        minus_one = current;
        current = minus_one + minus_two;

        if(current % 2 == 0) {
            sum += current;
        }
    }

    cout << sum << endl;

    return 0;
}
