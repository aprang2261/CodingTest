#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int n, int k) {
    int* answer = (int*)malloc(sizeof(int) * (n / k));
    int cnt = 0;
    
    for (int i = 1; i != n + 1; i++) {
        if (i % k == 0) answer[cnt++] = i;
    }
    
    return answer;
}