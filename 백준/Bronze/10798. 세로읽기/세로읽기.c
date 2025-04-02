#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
    char S[5][15] = { 0, };
    int maxLen = 0;

    for (int i = 0; i < 5; i++) {
        scanf("%s", S[i]);

        int len = strlen(S[i]);
        if (maxLen < len) {
            maxLen = len;
        }
    }

    for (int j = 0; j < maxLen; j++) {
        for (int i = 0; i < 5; i++) {
            if (S[i][j] != '\0') {
                printf("%c", S[i][j]);
            }
        }
    }
}