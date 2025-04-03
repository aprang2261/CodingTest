#include <stdio.h>
#define LEN_INPUT 20

int main(void) {
    char s1[LEN_INPUT];
    int count = 0;
    
    scanf("%s", s1);
    
    while (s1[count]) {
        if (s1[count] >= 65 && s1[count] <= 90) {
            s1[count] += 32;
        }
        else if (s1[count] >= 97 && s1[count] <= 122) {
            s1[count] -= 32;
        }
        count++;
    }
    
    printf("%s", s1);

    return 0;
}
