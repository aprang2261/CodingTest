int main() {
    int birthY, birthM, birthD;
    int refY, refM, refD;

    scanf("%d %d %d", &birthY, &birthM, &birthD);
    scanf("%d %d %d", &refY, &refM, &refD);

    int age = refY - birthY;
    if (refM < birthM || (refM == birthM && refD < birthD)) {
        age -= 1;
    }

    int countingAge = refY - birthY + 1;

    int yearAge = refY - birthY;

    printf("%d\n", age);
    printf("%d\n", countingAge);
    printf("%d\n", yearAge);
}