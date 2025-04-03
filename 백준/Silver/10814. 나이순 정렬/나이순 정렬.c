typedef struct user {
    int old;
    int index;
    char name[101];
} user;

int compare(const void* a, const void* b)
{
    int aOld = ((user*)a)->old;
    int bOld = ((user*)b)->old;
    int aIndex = ((user*)a)->index;
    int bIndex = ((user*)b)->index;

    if (aOld != bOld)
        return aOld - bOld;
    else {
        return aIndex - bIndex;
    }
}

int main() {
    int num;
    user* list;

    scanf("%d", &num);

    list = (user*)malloc(sizeof(user) * num);

    for (int i = 0; i < num; i++) {
        scanf("%d %s", &list[i].old, list[i].name);
        list[i].index = i;
    }

    qsort(list, num, sizeof(user), compare);

    for (int i = 0; i < num; i++) {
        printf("%d %s\n", list[i].old, list[i].name);
    }

    free(list);
}