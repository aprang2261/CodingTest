int main() {
    int burger[3];
    int drink[2];

    for (int i = 0; i < 3; i++) {
        scanf("%d", &burger[i]);
    }

    for (int i = 0; i < 2; i++) {
        scanf("%d", &drink[i]);
    }

    int min_burger = burger[0];
    
    for (int i = 1; i < 3; i++) {
        if (burger[i] < min_burger) {
            min_burger = burger[i];
        }
    }

    int min_drink = drink[0];
    
    if (drink[1] < min_drink) {
        min_drink = drink[1];
    }

    int set_price = min_burger + min_drink - 50;
    printf("%d\n", set_price);
}