int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int a, b, folds;
        scanf("%d %d %d", &a, &b, &folds);

        int width = a;
        int height = b;

        for (int j = 0; j < folds; j++) {
            if (width >= height) {
                width /= 2;
            } else {
                height /= 2;
            }
        }

        printf("Data set: %d %d %d\n", a, b, folds);
        if (width >= height)
            printf("%d %d\n", width, height);
        else
            printf("%d %d\n", height, width);
        printf("\n");
    }
}