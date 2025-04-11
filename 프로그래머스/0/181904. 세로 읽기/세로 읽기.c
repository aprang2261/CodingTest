#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(const char* my_string, int m, int c) {
    int len = strlen(my_string);
    int rows = len / m;
    char* answer = (char*)malloc((rows + 1) * sizeof(char)); 

    for (int i = 0; i < rows; i++) {
        answer[i] = my_string[i * m + (c - 1)];
    }
    answer[rows] = '\0';

    return answer;
}