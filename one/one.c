#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    int limit;
    long sum;
    int i;

    if(argc != 2) {
        printf("Usage: one <limit>\n");
        return 1;
    }

    limit = atoi(argv[1]);

    sum = 0;
    for(i=1; i<limit; i++) {
        if(i % 3 == 0 || i % 5 == 0) {
            sum += i;
        }
    }

    printf("%ld\n", sum);

    return 0;
}
