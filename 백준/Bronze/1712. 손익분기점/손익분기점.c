int main() {
    int a, b, c;
    int i = 0;

    scanf("%d %d %d", &a, &b, &c);

    if (c <= b) {
        printf("-1");
    }
    else {
        i = a / (c - b);
        printf("%d", i + 1);
    }
}