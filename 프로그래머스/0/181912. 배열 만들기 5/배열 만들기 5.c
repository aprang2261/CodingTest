#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(const char* intStrs[], size_t intStrs_len, int k, int s, int l) {
    int* answer = (int*)malloc(sizeof(int) * (intStrs_len + 1));
    int count = 0;

    for (int i = 0; i < intStrs_len; i++) {
        char temp[20];
        
        for (int j = s; j < s + l; j++) {
            temp[j - s] = intStrs[i][j];
        }
        temp[l] = '\0';

        int num = atoi(temp);

        if (num > k) answer[count++] = num;
    }

    return realloc(answer, sizeof(int) * count);
}