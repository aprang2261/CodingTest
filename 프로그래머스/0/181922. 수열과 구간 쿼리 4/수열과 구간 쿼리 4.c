#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int arr[], size_t arr_len, int** queries, size_t queries_rows, size_t queries_cols) {
    int* answer = (int*)malloc(sizeof(int) * arr_len);
    
    for (int i = 0; i < queries_rows; i++) {
        int s = queries[i][0];
        int e = queries[i][1];
        int k = queries[i][2];
        
        for (int j = s; j <= e; j++) {
            if(j % k == 0) arr[j]++;
        }
    }
    
    for (int i = 0; i < arr_len; i++) {
        answer[i] = arr[i];
    }
    
    return answer;
}