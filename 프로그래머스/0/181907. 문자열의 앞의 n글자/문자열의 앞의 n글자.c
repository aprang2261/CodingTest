#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(const char* my_string, int n) {
    char* answer = (char*)malloc(sizeof(char) * (n + 1));
    
    strncpy(answer, my_string, n);
    answer[n] = '\0';
    
    return answer;
}