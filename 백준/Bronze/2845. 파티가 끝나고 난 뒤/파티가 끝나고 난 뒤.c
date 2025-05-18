int main() {
    int l, p;
    scanf("%d %d", &l, &p);

    int actual = l * p;
    int article[5];

    for (int i = 0; i < 5; i++) {
        scanf("%d", &article[i]);
    }

    for (int i = 0; i < 5; i++) {
        printf("%d ", article[i] - actual);
    }

    printf("\n");
}