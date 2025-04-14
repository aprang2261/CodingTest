#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char** solution(const char* str_list[], size_t str_list_len) {
    for (size_t i = 0; i < str_list_len; i++) {
        if (strcmp(str_list[i], "l") == 0) {
            char** answer = malloc(sizeof(char*) * i);
            
            for (size_t j = 0; j < i; j++) {
                answer[j] = strdup(str_list[j]);
            }
            return answer;
            
        } else if (strcmp(str_list[i], "r") == 0) {
            size_t count = str_list_len - i - 1;
            char** answer = malloc(sizeof(char*) * count);
            
            for (size_t j = 0; j < count; j++) {
                answer[j] = strdup(str_list[i + 1 + j]);
            }
            return answer;
        }
    }

    return malloc(0);
}