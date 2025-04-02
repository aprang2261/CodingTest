#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    char S[1000001];
    int N = 1;

    scanf("%[^\n]", S);

    if (strlen(S) == 1 && S[0] == ' ') {
        printf("0");
        return 0;
    }

    for (int i = 1; i < strlen(S) - 1; i++) {
        if (S[i] == ' ') {
            N++;
        }
    }

    printf("%d", N);

    return 0;
}