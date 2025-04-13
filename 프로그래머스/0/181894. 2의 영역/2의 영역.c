#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int arr[], size_t arr_len) {
    int* answer = (int*)malloc(sizeof(int) * arr_len);
    int min = arr_len;
    int max = -1;
    
    answer[0] = -1;
    
    for (int i = 0; i < arr_len; i++) {
        if (arr[i] == 2) {
            if (min > i) min = i;
            if (max < i) max = i;
        }
    }
    
    for (int i = min; i <= max; i++) answer[i - min] = arr[i];
    
    return answer;
}