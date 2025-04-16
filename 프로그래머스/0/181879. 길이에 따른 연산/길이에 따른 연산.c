#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num_list[], size_t num_list_len) {
    int answer = 0;

    if (num_list_len >= 11) {
        for (size_t i = 0; i < num_list_len; i++) {
            answer += num_list[i];
        }
    } else {
        answer = 1;
        
        for (size_t i = 0; i < num_list_len; i++) {
            answer *= num_list[i];
        }
    }

    return answer;
}