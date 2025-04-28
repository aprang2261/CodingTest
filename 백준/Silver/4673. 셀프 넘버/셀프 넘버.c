int main() {
    int i = 1;
    int nonSelfNum[10001];

    for (int k = 0; k < 10001; k++) {
        nonSelfNum[k] = 1;
    }

    while (i != 10001) {
        int generatedNum;
        if (i / 10 == 0) {
            generatedNum = i + i;
        }
        else if (i / 10 >= 1 && i / 10 < 10) {
            generatedNum = i / 10 + i % 10 + i;
        }
        else if (i / 10 >= 10 && i / 10 < 100) {
            generatedNum = i / 100 + (i % 100) / 10 + i % 10 + i;
        }
        else {
            generatedNum = i / 1000 + (i % 1000) / 100 + (i % 1000 % 100) / 10 + i % 10 + i;
        }
        if (generatedNum <= 10000) {
            nonSelfNum[generatedNum] = 0;
        }
        i++;
    }

    for (int i = 1; i < 10001; i++) {
        if (nonSelfNum[i] == 1) {
            printf("%d\n", i);
        }
    }
}