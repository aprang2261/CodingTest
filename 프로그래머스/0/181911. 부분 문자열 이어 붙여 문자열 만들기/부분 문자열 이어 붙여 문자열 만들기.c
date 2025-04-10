#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(const char* my_strings[], size_t my_strings_len, int** parts, size_t parts_rows, size_t parts_cols) {
    int answer_len = 0;

    for (int i = 0; i < parts_rows; i++) {
        int start = parts[i][0];
        int end = parts[i][1];
        answer_len += (end - start + 1);
    }

    char* answer = (char*)malloc(sizeof(char) * (answer_len + 1));
    answer[0] = '\0';

    for (int i = 0; i < parts_rows; i++) {
        int start = parts[i][0];
        int end = parts[i][1];
        int len = end - start + 1;

        char temp[101];
        strncpy(temp, my_strings[i] + start, len);
        temp[len] = '\0';
        strcat(answer, temp); 
    }

    return answer;
}