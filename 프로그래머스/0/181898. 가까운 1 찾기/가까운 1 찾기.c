#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int arr[], size_t arr_len, int idx) {
    int answer = -1;
    
    for (int i = idx; i < arr_len; i++) {
        if (arr[i] == 1) {
            answer = i;
            break;
        }
    }
    
    return answer;
}