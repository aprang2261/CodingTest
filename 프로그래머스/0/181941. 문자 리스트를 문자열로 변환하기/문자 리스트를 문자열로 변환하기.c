#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* arr[], size_t arr_len) {
    char* answer = (char*)malloc(sizeof(char) * (arr_len + 1));
    
    answer[0] = '\0';
    
    for (int i = 0; i < arr_len; i++) {
        strcat(answer, arr[i]);
    }
    
    answer[arr_len] = '\0';
    
    return answer;
}