int main(void) {
    char s[101];
    scanf("%s", s);

    for (int i = 0; s[i] != '\0'; ++i) {
        if ('a' <= s[i] && s[i] <= 'z')
            s[i] = toupper(s[i]);
        else if ('A' <= s[i] && s[i] <= 'Z')
            s[i] = tolower(s[i]);
    }

    printf("%s\n", s);
}