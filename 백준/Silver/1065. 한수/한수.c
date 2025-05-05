int main() {
    int num, count = 0, i = 1;
    scanf("%d", &num);
    
    while (i <= num) {
        if (i < 100) count++;
        else {
            int hundreds = i / 100;
            int tens = i % 100 / 10;
            int units = i % 100 % 10;
            
            if (hundreds - tens == tens - units && i != 1000) {
                count++;
            }
        }
        i++;
    }

    printf("%d", count);
}