int main() {
    int x, y;

    scanf("%d %d", &x, &y);

    int days_in_month[] = { 31, 28, 31, 30, 31, 30,
                           31, 31, 30, 31, 30, 31 };

    const char* weekdays[] = { "MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN" };
    int total_days = 0;

    for (int i = 0; i < x - 1; i++) {
        total_days += days_in_month[i];
    }

    total_days += (y - 1);

    printf("%s\n", weekdays[total_days % 7]);
}