#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
    const char* str1 = *(const char**)a;
    const char* str2 = *(const char**)b;
    return strcmp(str1, str2);
}

char** solution(const char* my_string) {
    int len = strlen(my_string);
    char** answer = (char**)malloc(sizeof(char*) * (len + 1));
    
    for (int i = 0; i < len; i++) {
        answer[i] = (char*)malloc(sizeof(char) * (len - i + 1));
        strncpy(answer[i], my_string + i, len - i);
        answer[i][len - i] = '\0';
    }
    
    qsort(answer, len, sizeof(char*), compare);
    
    return answer;
}