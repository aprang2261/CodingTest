#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int n, int slicer[], size_t slicer_len, int num_list[], size_t num_list_len) {
    int* answer = (int*)malloc(sizeof(int) * num_list_len);
    
    int a = slicer[0];
    int b = slicer[1];
    int c = slicer[2];
    
    switch(n) {
        case 1:
            for (int i = 0; i <= b; i++) {
                answer[i] = num_list[i];
            } break;
        case 2:
            for (int i = a; i < num_list_len; i++) {
                answer[i - a] = num_list[i];
            } break;
        case 3:
            for (int i = a; i <= b; i++) {
                answer[i - a] = num_list[i];
            } break;
        case 4:
            for (int i = a; i <= b; i += c) {
                answer[(i - a) / c] = num_list[i];
            } break;
    }
    
    return answer;
}