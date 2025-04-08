#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int n) {
    int* answer = (int*)malloc(sizeof(int) * 1001);
    int i = 0;
    
    while(1) {
        answer[i] = n;
        
        if (n == 1) break;
        
        if (n % 2 == 0) n /= 2;
        else n = n * 3 + 1;
        
        i++;
    }
    
    return answer;
}