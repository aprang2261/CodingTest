int main() {
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    int temp;

    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }

    if (a > c) {
        temp = a;
        a = c;
        c = temp;
    }

    if (b > c) {
        temp = b;
        b = c;
        c = temp;
    }

    printf("%d %d %d\n", a, b, c);
}