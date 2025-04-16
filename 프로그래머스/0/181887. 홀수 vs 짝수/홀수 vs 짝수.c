#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num_list[], size_t num_list_len) {
    int answer = 0, odd = 0, even = 0;
    
    for (int i = 0; i < num_list_len; i++) {
        if (i % 2 == 1) odd += num_list[i];
        if (i % 2 == 0) even += num_list[i];
    }
    
    answer = even > odd ? even : odd;
    
    return answer;
}