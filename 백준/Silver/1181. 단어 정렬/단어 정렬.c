typedef struct word {
	char word[51];
} word;

int compare(const void* a, const void* b)
{
    int aLen = strlen(((word*)a)->word);
    int bLen = strlen(((word*)b)->word);

    if (aLen != bLen)
        return aLen - bLen;
    else
        return strcmp(((word*)a)->word, ((word*)b)->word);
}

int main() {
    int num;
    word* list;

    scanf("%d", &num);

    list = (word*)malloc(sizeof(word) * num);

    for (int i = 0; i < num; i++) {
        scanf(" %s", list[i].word);
    }

    qsort(list, num, sizeof(word), compare);

    printf("%s\n", list[0].word);

    for (int i = 1; i < num; i++) {
        if (strcmp(list[i].word, list[i - 1].word) != 0) {
            printf("%s\n", list[i].word);
        }
    }

    free(list);
}