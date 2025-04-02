#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
    int N;
    int cnt = 0;

    scanf("%d", &N);

    for (int j = 0; j < N; j++) {
        char S[101];
        int apb[26] = { 0 };

        scanf("%s", S);

        int len = strlen(S);
        int isGroupWord = 1;

        for (int i = 0; i < len; i++) {
            int index = S[i] - 'a';

            if (apb[index] == 0) {
                apb[index] = 1;
            }
            else {
                if (S[i] != S[i - 1]) {
                    isGroupWord = 0;
                    break;
                }
            }
        }

        if (isGroupWord) {
            cnt++;
        }
    }

    printf("%d\n", cnt);
    return 0;
}