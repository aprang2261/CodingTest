void merge(int list[], int left, int mid, int right, int n) {
    int i, j, k, l;
    int* sorted = (int*)malloc(sizeof(int) * n);

    i = left;
    j = mid + 1;
    k = left;

    while (i <= mid && j <= right) {
        if (list[i] <= list[j]) {
            sorted[k++] = list[i++];
        }
        else {
            sorted[k++] = list[j++];
        }
    }

    while (i <= mid) {
        sorted[k++] = list[i++];
    }

    while (j <= right) {
        sorted[k++] = list[j++];
    }

    for (l = left; l <= right; l++) {
        list[l] = sorted[l];
    }

    free(sorted);
}

void merge_sort(int list[], int left, int right, int n) {
    int mid;
    if (left < right) {
        mid = (left + right) / 2;
        merge_sort(list, left, mid, n);
        merge_sort(list, mid + 1, right, n);
        merge(list, left, mid, right, n);
    }
}

int main() {
    int i;
    int n;

    scanf("%d", &n);

    int* num = (int*)malloc(sizeof(int) * n);
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &num[i]);
    }

    merge_sort(num, 0, n - 1, n);

    for (i = 0; i < n; i++) {
        printf("%d\n", num[i]);
    }

    free(num);
}