int main() {
    char a[5], b[5], c[5];

    scanf("%s", a);
    scanf("%s", b);
    scanf("%s", c);

    int ai = atoi(a);
    int bi = atoi(b);
    int ci = atoi(c);

    printf("%d\n", ai + bi - ci);

    char ab[13];
    sprintf(ab, "%s%s", a, b);

    int result = atoi(ab) - atoi(c);

    printf("%d\n", result);
}