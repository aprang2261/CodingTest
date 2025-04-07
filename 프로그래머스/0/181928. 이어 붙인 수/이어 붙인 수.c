#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num_list[], size_t num_list_len) {
    int answer = 0;
    int even_count = 0;
    int odd_count = 0;
    
    for (int i = num_list_len - 1; i >= 0; i--) {
        if (num_list[i] % 2 == 1) {
            if (odd_count != 0) {
                answer += pow(10, odd_count) * num_list[i];
                odd_count++;
            }
            else {
                answer += num_list[i];
                odd_count++;
            }
        }
        else {
            if (even_count != 0) {
                answer += pow(10, even_count) * num_list[i];
                even_count++;
            }
            else {
                answer += num_list[i];
                even_count++;
            } 
        }
    }
    
    return answer;
}