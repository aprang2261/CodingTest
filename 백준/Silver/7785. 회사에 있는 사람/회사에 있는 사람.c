typedef struct {
	char people[6];
	char stay[6];
}record;

record log[1000001];

int compare(const void* a, const void* b)
{
	record num1 = *(record*)a;
	record num2 = *(record*)b;

	if (strcmp(num1.people, num2.people) < 0) return 1;
	else if (strcmp(num1.people, num2.people) > 0) return -1;
	else return 0;
}

int main(void)
{
	int n;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%s %s", log[i].people, log[i].stay);
	}
	qsort(log, n, sizeof(record), compare);

	for (int i = 0; i < n; i++)
	{
		if (!strcmp(log[i].people, log[i + 1].people))
		{
			i++;
		}
		else
		{
			printf("%s\n", log[i].people);
		}
	}
}