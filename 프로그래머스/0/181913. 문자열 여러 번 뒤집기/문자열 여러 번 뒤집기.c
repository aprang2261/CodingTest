#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(const char* my_string, int** queries, size_t queries_rows, size_t queries_cols) {
    char* answer = (char*)malloc(strlen(my_string) + 1);
    strcpy(answer, my_string);
    
    for (int i = 0; i < queries_rows; i++) {
        int start = queries[i][0];
        int end = queries[i][1];

        while (start < end) {
            char temp = answer[start];
            answer[start] = answer[end];
            answer[end] = temp;
            start++;
            end--;
        }
    }
    
    return answer;
}