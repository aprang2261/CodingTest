#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num_list[], size_t num_list_len) {
    int answer = 0;

    for (size_t i = 0; i < num_list_len; i++) {
        int n = num_list[i];
        
        while (n > 1) {
            n /= 2;
            answer++;
        }
    }

    return answer;
}