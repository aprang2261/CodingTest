#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int q, int r, const char* code) {
    int len = strlen(code);
    int count = 0;

    for (int i = 0; i < len; i++) {
        if (i % q == r) {
            count++;
        }
    }

    char* answer = (char*)malloc(sizeof(char) * (count + 1));
    int index = 0;

    for (int i = 0; i < len; i++) {
        if (i % q == r) {
            answer[index++] = code[i];
        }
    }

    answer[index] = '\0';
    
    return answer;
}