#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int arr[], size_t arr_len, int query[], size_t query_len) {
    int start = 0;
    int end = arr_len - 1;

    for (int i = 0; i < query_len; i++) {
        if (i % 2 == 0) {
            end = start + query[i]; // 앞부분 유지
        } else {
            start = start + query[i]; // 뒷부분 유지
        }
    }

    int len = end - start + 1;
    int* answer = (int*)malloc(sizeof(int) * len);

    for (int i = 0; i < len; i++) {
        answer[i] = arr[start + i];
    }

    return answer;
}