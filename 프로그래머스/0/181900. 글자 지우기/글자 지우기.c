#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(const char* my_string, int indices[], size_t indices_len) {
    char* answer = (char*)malloc(strlen(my_string) + 1);
    bool* remove_flags = (bool*)calloc(strlen(my_string), sizeof(bool));

    for (size_t i = 0; i < indices_len; i++) {
        if (indices[i] < strlen(my_string)) {
            remove_flags[indices[i]] = 1;
        }
    }

    size_t pos = 0;
    for (size_t i = 0; i < strlen(my_string); i++) {
        if (!remove_flags[i]) {
            answer[pos++] = my_string[i];
        }
    }
    answer[pos] = '\0';

    free(remove_flags);
    return answer;
}