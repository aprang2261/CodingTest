#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int num) {
    char* answer = (char*)malloc(sizeof(char) * 5);
    
    answer = num % 2 != 0 ? "Odd" :"Even";
    
    return answer;
}