#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int arr[], size_t arr_len, int** queries, size_t queries_rows, size_t queries_cols) {
    int* answer = (int*)malloc(sizeof(int) * arr_len);
    
    for (int i = 0; i < queries_rows; i++) {
        int temp = arr[queries[i][0]];
        arr[queries[i][0]] = arr[queries[i][1]];
        arr[queries[i][1]] = temp;
    }
                                 
                                 
    for (int i = 0; i < arr_len; i++) {
        answer[i] = arr[i];
    }
    
    return answer;
}