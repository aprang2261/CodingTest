#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int l, int r) {
    int arr_size = 0;
    int* temp = (int*)malloc(sizeof(int) * (r - l + 1));

    for (int i = l; i <= r; i++) {
        int n = i, valid = 1;
        
        while (n) {
            int d = n % 10;
            
            if (d != 0 && d != 5) {
                valid = 0;
                break;
            }
            n /= 10;
        }
        
        if (valid) temp[arr_size++] = i;
    }

    if (arr_size == 0) {
        int* answer = (int*)malloc(sizeof(int));
        answer[0] = -1;
        
        free(temp);
        return answer;
    }

    int* answer = (int*)malloc(sizeof(int) * arr_size);
    
    for (int i = 0; i < arr_size; i++) {
        answer[i] = temp[i];
    }

    free(temp);
    
    return answer;
}