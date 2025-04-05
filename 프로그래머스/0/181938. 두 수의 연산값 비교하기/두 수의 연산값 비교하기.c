#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

int solution(int a, int b) {
    int answer = 0;
    
    if (pow(10, (int)floor(log10(b) + 1)) * a + b < 2 * a * b) {
        answer = 2 * a * b;
    }
    else {
        answer = pow(10, (int)floor(log10(b) + 1)) * a + b;
    }
    
    return answer;
}