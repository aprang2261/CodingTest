#include <stdio.h>
#include <time.h>

int main(void) {
    time_t t = time(NULL);
    struct tm *tm_info = localtime(&t);

    printf("%04d-%02d-%02d\n", tm_info->tm_year + 1900, tm_info->tm_mon + 1, tm_info->tm_mday);
}