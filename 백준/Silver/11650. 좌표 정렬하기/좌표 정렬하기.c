int compare(const void* a, const void* b) {
    int* p1 = *(int**)a;
    int* p2 = *(int**)b;

    if (p1[0] != p2[0]) {
        return p1[0] - p2[0];
    }
    else {
        return p1[1] - p2[1];
    }
}

int main() {
    int n;
    int max = -100001;

    scanf("%d", &n);

    int** pos = (int**)malloc(sizeof(int*) * n);

    for (int i = 0; i < n; i++) {
        pos[i] = (int*)malloc(sizeof(int) * 2);
    }

    for (int j = 0; j < n; j++) {
        scanf("%d %d", &pos[j][0], &pos[j][1]);

        if (pos[j][0] > max) {
            max = pos[j][0];
        }
    }

    qsort(pos, n, sizeof(int*), compare);

    for (int m = 0; m < n; m++) {
        printf("%d %d\n", pos[m][0], pos[m][1]);
    }

    for (int i = 0; i < n; i++) {
        free(pos[i]);
    }
    free(pos);

    return 0;
}