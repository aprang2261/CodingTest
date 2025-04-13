#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int arr[], size_t arr_len, int** intervals, size_t intervals_rows, size_t intervals_cols) {
    int alen = intervals[0][1] - intervals[0][0] + 1;
    int blen = intervals[1][1] - intervals[1][0] + 1;
    
    int* answer = (int*)malloc(sizeof(int) * (alen + blen));

    for (int i = 0; i < alen; i++) {
        answer[i] = arr[intervals[0][0] + i];
    }

    for (int i = 0; i < blen; i++) {
        answer[alen + i] = arr[intervals[1][0] + i];
    }

    return answer;
}