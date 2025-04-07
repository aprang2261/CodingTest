#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int numLog[], size_t numLog_len) {
    char* answer = (char*)malloc(sizeof(char) * numLog_len);
    
    for (int i = 0; i < numLog_len - 1; i++) {
        if (numLog[i + 1] - numLog[i] == 1) answer[i] = 'w';
        if (numLog[i + 1] - numLog[i] == -1) answer[i] = 's';
        if (numLog[i + 1] - numLog[i] == 10) answer[i] = 'd';
        if (numLog[i + 1] - numLog[i] == -10) answer[i] = 'a';
    }
    
    return answer;
}