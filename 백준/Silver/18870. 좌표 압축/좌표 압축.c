typedef struct pos {
	int x;
	int index;
} pos;

int compare(const void* a, const void* b) {
	int aNum = ((pos*)a)->x;
	int bNum = ((pos*)b)->x;

	return aNum - bNum;
}

int main() {
	int n;
	pos* list;

	scanf("%d", &n);

	list = (pos*)malloc(sizeof(pos) * n);
	int* comp = (int*)malloc(sizeof(int) * n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &list[i].x);
		list[i].index = i;
	}

	qsort(list, n, sizeof(pos), compare);

	int j = 0;
	comp[list[0].index] = 0;

	for (int i = 1; i < n; i++) {
		if (list[i].x != list[i - 1].x) {
			j++;
		}
		comp[list[i].index] = j;
	}

	for (int i = 0; i < n; i++) {
		printf("%d ", comp[i]);
	}

	free(list);
	free(comp);
}