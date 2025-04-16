#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int arr[], size_t arr_len, int** queries, size_t queries_rows, size_t queries_cols) {
    int* answer = (int*)malloc(sizeof(int) * arr_len);
    for (size_t i = 0; i < arr_len; i++) {
        answer[i] = arr[i];
    }

    for (size_t q = 0; q < queries_rows; q++) {
        int s = queries[q][0];
        int e = queries[q][1];

        for (int i = s; i <= e; i++) {
            if (i >= 0 && i < arr_len) {
                answer[i] += 1;
            }
        }
    }

    return answer;
}