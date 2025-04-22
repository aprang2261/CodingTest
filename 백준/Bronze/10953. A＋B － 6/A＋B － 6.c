int main() {
    int t;
    scanf("%d", &t);

    int a, b;
    int result[100];

    for (int i = 0; i < t; i++) {
        scanf("%d,%d", &a, &b);
        result[i] = a + b;
    }

    for (int i = 0; i < t; i++) {
        printf("%d\n", result[i]);
    }
}