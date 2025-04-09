#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


int* solution(int arr[], size_t arr_len) {
    int* stk = (int*)malloc(sizeof(int) * arr_len);
    int top = -1;
    int i = 0;

    while (i < arr_len) {
        if (top == -1) {
            stk[++top] = arr[i++];
        } else if (stk[top] < arr[i]) {
            stk[++top] = arr[i++];
        } else {
            top--;
        }
    }

    return stk;
}