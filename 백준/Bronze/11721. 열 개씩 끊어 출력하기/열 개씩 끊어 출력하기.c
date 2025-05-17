int main() {
    char s[101];
    scanf("%s", s);

    int len = strlen(s);

    for (int i = 0; i < len; i++) {
        printf("%c", s[i]);
        
        if ((i + 1) % 10 == 0) {
            printf("\n");
        }
    }

    if (len % 10 != 0) {
        printf("\n");
    }
}