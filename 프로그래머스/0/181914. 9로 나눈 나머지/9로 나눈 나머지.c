#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(const char* number) {
    int answer = 0;
    
    int len = strlen(number);
    
    for(int i = 0; i < len; i++) {
        answer += number[i] - '0';
    }   
    
    return answer % 9;
}