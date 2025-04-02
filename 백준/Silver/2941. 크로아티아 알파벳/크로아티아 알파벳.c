#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    char S[101];
    int cnt = 0;
    int i = 0;

    scanf("%s", S);
 
    while (S[i] != '\0') {
        if ((S[i] == 'c' && (S[i + 1] == '=' || S[i + 1] == '-')) ||
            (S[i] == 'd' && S[i + 1] == '-') ||
            (S[i] == 'l' && S[i + 1] == 'j') ||
            (S[i] == 'n' && S[i + 1] == 'j') ||
            (S[i] == 's' && S[i + 1] == '=') ||
            (S[i] == 'z' && S[i + 1] == '=')) {
            i += 2;
        }
        else if (S[i] == 'd' && S[i + 1] == 'z' && S[i + 2] == '=') {
            i += 3;
        }
        else {
            i++;
        }
        cnt++;
    }

    printf("%d\n", cnt);
    return 0;
}