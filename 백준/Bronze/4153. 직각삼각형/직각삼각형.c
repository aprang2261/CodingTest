int main() {
    int a, b, c;
    char result[1000][10];

    int idx = 0;

    while (1) {
        scanf("%d %d %d", &a, &b, &c);

        if (a == 0 && b == 0 && c == 0) {
            break;
        }

        if (a > b) {
            int temp = a;
            a = b;
            b = temp;
        }
        if (b > c) {
            int temp = b;
            b = c;
            c = temp;
        }
        if (a > b) {
            int temp = a;
            a = b;
            b = temp;
        }

        if (a * a + b * b == c * c) {
            sprintf(result[idx], "right");
        }
        else {
            sprintf(result[idx], "wrong");
        }

        idx++;
    }

    for (int i = 0; i < idx; i++) {
        printf("%s\n", result[i]);
    }
}