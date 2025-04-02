#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	int i, k, n, b;
	scanf("%d %d", &n, &b);

	for (i = 30; i >= 0; i--)
	{
		int j = pow(b, i);

		if (j > n) 
		{
			k = i - 1;
			continue; 
		}
	}

	for (i = k; i >= 0; i--)
	{
		int j = pow(b, i);

		if (j < 0) {}
		else
		{
			if (n / j < 10)
			{
				printf("%d", n / j);
			}
			else 
			{
				printf("%c", (n / j) + 55);
			}

			if (n / j != 0)
			{
				n = n - j * (n / j);
			}
		}
	}
}