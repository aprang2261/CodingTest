#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int num_list[], size_t num_list_len, int n) {
    int* answer = (int*)malloc(sizeof(int) * (num_list_len - n + 1));
    
    for (int i = n - 1; i < num_list_len; i++) {
        answer[i - n + 1] = num_list[i];
    }
    
    return answer;
}