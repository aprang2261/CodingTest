#include <string.h>

int main() {
    char name[11];
    int found = 0;

    for (int i = 1; i <= 5; i++) {
        scanf("%s", name);
        if (strstr(name, "FBI") != NULL) {
            printf("%d ", i);
            found = 1;
        }
    }

    if (!found) {
        printf("HE GOT AWAY!");
    }
}