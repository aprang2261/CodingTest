int main() {
    int n, vote;
    int cute = 0, not_cute = 0;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &vote);
        if (vote == 1) {
            cute++;
        } else {
            not_cute++;
        }
    }

    if (cute > not_cute) {
        printf("Junhee is cute!\n");
    } else {
        printf("Junhee is not cute!\n");
    }
}