#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(const char* my_string, const char* is_prefix) {
    int len1 = strlen(my_string);
    int len2 = strlen(is_prefix);

    if (len2 > len1) return 0;

    if (strncmp(my_string, is_prefix, len2) == 0) return 1;
    else return 0;
}