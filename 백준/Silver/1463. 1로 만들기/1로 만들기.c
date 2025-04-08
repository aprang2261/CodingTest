#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int num[1000001];

int main() {
    int n;

    scanf("%d", &n);

    num[1] = 0;

    for (int i = 2; i <= n; i++) {
        num[i] = num[i - 1] + 1;

        if (i % 2 == 0) {
            if (num[i] > num[i / 2] + 1) {
                num[i] = num[i / 2] + 1;
            }
        }

        if (i % 3 == 0) {
            if (num[i] > num[i / 3] + 1) {
                num[i] = num[i / 3] + 1;
            }
        }
    }

    printf("%d\n", num[n]);
    return 0;
}