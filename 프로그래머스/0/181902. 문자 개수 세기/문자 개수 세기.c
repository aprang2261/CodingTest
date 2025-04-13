#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(const char* my_string) {
    int* answer = (int*)calloc(52, sizeof(int));

    for (int i = 0; my_string[i] != '\0'; i++) {
        char ch = my_string[i];
        if ('A' <= ch && ch <= 'Z') {
            answer[ch - 'A']++;
        } else if ('a' <= ch && ch <= 'z') {
            answer[ch - 'a' + 26]++;
        }
    }

    return answer;
}