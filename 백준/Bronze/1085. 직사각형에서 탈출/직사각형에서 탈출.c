int main() {
	int x, y, w, h, min;

	scanf("%d %d %d %d", &x, &y, &w, &h);
	
	if (w - x < h - y) {
		min = w - x;
	}
	else {
		min = h - y;
	}

	if (y < x) {
		x = y;
	}

	if (x < min) {
		min = x;
	}
	
	printf("%d", min);
}