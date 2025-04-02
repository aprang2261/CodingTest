#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    char a[101];

    while (scanf("%[^\n]", a) != EOF) {
        printf("%s\n", a);
        getchar();
    }

    return 0;
}