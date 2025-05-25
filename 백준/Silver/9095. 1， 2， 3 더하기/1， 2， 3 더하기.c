#include <stdio.h>

int total = 0;
void back(int idx, int n, int sum)
{
    if (sum > n) return;
    if (sum == n)
    {
        total++;
        return;
    }
    for (size_t i = idx; i > 0; i--)
    {
        back(idx, n, sum + i);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    for (size_t i = 0; i < n; i++)
    {
        int num;
        scanf("%d", &num);
        total = 0;
        back(3, num, 0);
        printf("%d\n", total);
    }
}