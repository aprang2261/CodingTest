int main() {
    int coins, price, i, count = 0;
    scanf("%d %d", &coins, &price);

    int* coin = malloc(sizeof(int) * coins);
    for (i = 0; i < coins; i++) scanf("%d", &coin[i]);
    i--;

    while (price != 0) {
        if (coin[i] > price) i--;
        else {
            price -= coin[i];
            count++;
        }
    }

    printf("%d", count);
    free(coin);
}