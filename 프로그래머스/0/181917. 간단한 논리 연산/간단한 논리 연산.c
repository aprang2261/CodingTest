#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool solution(bool x1, bool x2, bool x3, bool x4) {
    bool answer = true;
    
    if (x1 == 0 && x2 == 0) x1 = 0;
    else x1 = 1;
    if (x3 == 0 && x4 == 0) x3 = 0;
    else x3 = 1;
    if (x1 != 1 || x3 != 1) answer = 0;
    
    return answer;
}