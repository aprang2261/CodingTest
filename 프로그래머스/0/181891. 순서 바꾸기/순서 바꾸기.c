#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int num_list[], size_t num_list_len, int n) {
    int* answer = (int*)malloc(sizeof(int) * num_list_len);

    for (int i = n; i < num_list_len; i++) {
        answer[i - n] = num_list[i];
    }
    for (int i = 0; i < n; i++) {
        answer[num_list_len - n + i] = num_list[i];
    }

    return answer;
}