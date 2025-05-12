int compare(const void* a, const void* b) {
    int num1 = *(int*)a;
    int num2 = *(int*)b;
    return (num1 > num2) - (num1 < num2);
}

int binarySearch(int arr[], int size, int target) {
    int left = 0, right = size - 1;
    while (left <= right) {
        int mid = (left + right) / 2;

        if (arr[mid] == target) return 1;
        else if (arr[mid] < target) left = mid + 1;
        else right = mid - 1;
    }
    return 0;
}

int main() {
    int n, m;
    scanf("%d", &n);

    int* list = (int*)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        scanf("%d", &list[i]);
    }

    qsort(list, n, sizeof(int), compare);

    scanf("%d", &m);
    int find;

    for (int i = 0; i < m; i++) {
        scanf("%d", &find);
        printf("%d\n", binarySearch(list, n, find));
    }

    free(list);
}