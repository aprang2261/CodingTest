#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char people[6];
    char stay[6];
} record;

int compare(const void* a, const void* b) {
    record num1 = *(record*)a;
    record num2 = *(record*)b;
    return strcmp(num2.people, num1.people);
}

int main(void) {
    int n;
    scanf("%d", &n);

    record* log = (record*)malloc(sizeof(record) * n);

    for (int i = 0; i < n; i++) {
        scanf("%s %s", log[i].people, log[i].stay);
    }

    qsort(log, n, sizeof(record), compare);

    for (int i = 0; i < n; i++) {
        if (!strcmp(log[i].people, log[i + 1].people)) {
            i++;
        }
        else {
            printf("%s\n", log[i].people);
        }
    }

    free(log);
}