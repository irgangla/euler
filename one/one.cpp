#include <iostream>

using namespace std;

int main(int argc, char **argv) {
    int limit;
    long sum;
    int i;

    if(argc != 2) {
        cout << "Usage: one <limit>" << endl;
        return 1;
    }

    limit = stoi(argv[1]);

    sum = 0;
    for(i=1; i<limit; i++) {
        if(i % 3 == 0 || i % 5 == 0) {
            sum += i;
        }
    }

    cout << sum << endl;

    return 0;
}
