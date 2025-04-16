#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char** solution(const char* names[], size_t names_len) {
    size_t answer_len = names_len / 5 + (names_len % 5 != 0 ? 1 : 0);
    char** answer = (char**)malloc(sizeof(char*) * answer_len);
    
    for (size_t i = 0; i < names_len; i++) {
        if (i % 5 == 0) {
            answer[i / 5] = (char*)names[i];
        }
    }

    return answer;
}