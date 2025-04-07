#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int arr[], size_t arr_len, int** queries, size_t queries_rows, size_t queries_cols) {
    int* answer = (int*)malloc(sizeof(int) * queries_rows);
    
    for (int i = 0; i < queries_rows; i++) {
        int s = queries[i][0];
        int e = queries[i][1];
        int k = queries[i][2];
        int min = 1000001;
        
        for (int j = s; j <= e; j++) {
            if(arr[j] > k && min > arr[j]) min = arr[j];
        }
        
        if (min == 1000001) min = -1;
        answer[i] = min;
    }
    
    return answer;
}