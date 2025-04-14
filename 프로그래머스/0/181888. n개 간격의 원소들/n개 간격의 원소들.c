#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int num_list[], size_t num_list_len, int n) {
    size_t result_len = (num_list_len + n - 1) / n;
    int* answer = (int*)malloc(sizeof(int) * result_len);
    
    for (size_t i = 0, j = 0; i < num_list_len; i += n, j++) {
        answer[j] = num_list[i];
    }

    return answer;
}