int main() {
    int bits[8];
    int fail = 0;
    for (int i = 0; i < 8; i++) {
        scanf("%d", &bits[i]);
        if (bits[i] == 9) fail = 1;
    }
    if (fail) printf("F\n");
    else printf("S\n");
}