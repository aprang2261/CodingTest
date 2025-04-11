#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(const char* my_string, int s, int e) {
    int len = strlen(my_string);

    char* answer = (char*)malloc(sizeof(char) * (len + 1));
    if (!answer) return NULL;

    strcpy(answer, my_string);

    while (s < e) {
        char temp = answer[s];
        answer[s] = answer[e];
        answer[e] = temp;
        s++;
        e--;
    }

    return answer;
}