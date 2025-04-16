#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char** solution(const char* todo_list[], size_t todo_list_len, bool finished[], size_t finished_len) {
    char** answer = (char**)malloc(sizeof(char*) * todo_list_len);
    size_t count = 0;
    
    for (size_t i = 0; i < todo_list_len; i++) {
        if (!finished[i]) {
            size_t len = strlen(todo_list[i]);
            answer[count] = (char*)malloc(sizeof(char) * (len + 1));
            strcpy(answer[count], todo_list[i]);
            count++;
        }
    }

    answer = (char**)realloc(answer, sizeof(char*) * count);

    return answer;
}