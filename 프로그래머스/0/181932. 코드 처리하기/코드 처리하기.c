#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(const char* code) {
    int len = strlen(code);
    char* answer = (char*)malloc(len + 1);
    
    int j = 0;
    int mode = 0;
    
    for (int i = 0; i < len; i++) {
        if (code[i] == '1') {
            mode = !mode;
            continue;
        }
        
        if ((mode == 0 && i % 2 == 0) || (mode == 1 && i % 2 != 0)) {
            answer[j++] = code[i];
        }
    }
    
    answer[j] = '\0';
    
    if (j == '\0') {
        strcpy(answer, "EMPTY");
    }
    
    return answer;
}