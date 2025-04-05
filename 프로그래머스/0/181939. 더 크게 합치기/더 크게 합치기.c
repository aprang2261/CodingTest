#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

int solution(int a, int b) {
    int answer = 0;
    
    if (pow(10, (int)floor(log10(a) + 1)) * b + a < pow(10, (int)floor(log10(b) + 1)) * a + b) {
        answer = pow(10, (int)floor(log10(b) + 1)) * a + b;
    }
    else {
        answer = pow(10, (int)floor(log10(a) + 1)) * b + a;
    }
    
    return answer;
}