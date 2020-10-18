#include <stdio.h>
#include <stdlib.h>

struct list {
    unsigned long long value;
    struct list* next;
};

struct list *append(struct list *before, unsigned long long value) {
    struct list *list;

    list = malloc(sizeof(struct list));
    if(list == NULL) {
        return NULL;
    }

    list->value = value;
    list->next = NULL;

    if(before != NULL) {
        before->next = list;
    }

    return list;
}

int main(int argc, char **argv) {
    unsigned long long number, candidate;
    struct list *list, *root;

    if(argc != 2) {
        printf("Usage: three <number>\n");
        return 1;
    }

    number = atoll(argv[1]);
    root = append(NULL, number);
    list = root;

    candidate = 2;

    while(number > 1) {
        if(number % candidate == 0) {
            list = append(list, candidate);
            number /= candidate;
        } else {
            candidate++;
        }
    }

    printf("%lld = ", root->value);
    list = root->next;
    while(list != NULL) {
        printf("%lld ", list->value);
        list = list->next;
        if(list != NULL) {
            printf("* ");
        }
    }
    printf("\n");

    return 0;
}
