#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n, const char* control) {
    int answer = 0;
    
    int len = strlen(control);
    
    for (int i = 0; i < len; i++) {
        if (control[i] == 'w') n++;
        if (control[i] == 's') n--;
        if (control[i] == 'd') n += 10;
        if (control[i] == 'a') n -= 10;
    }
    
    answer = n;
    
    return answer;
}