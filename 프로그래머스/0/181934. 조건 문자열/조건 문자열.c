#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int solution(const char* ineq, const char* eq, int n, int m) {
    int answer = 0;
    
    if (strcmp(eq, "=") == 0) {
        if (strcmp(ineq, "<") == 0 && n <= m) answer = 1;
        if (strcmp(ineq, ">") == 0  && n >= m) answer = 1;
    }
    if (strcmp(eq, "!") == 0) {
        if (strcmp(ineq, "<") == 0 && n < m) answer = 1;
        if (strcmp(ineq, ">") == 0 && n > m) answer = 1;
    }
    
    return answer;
}