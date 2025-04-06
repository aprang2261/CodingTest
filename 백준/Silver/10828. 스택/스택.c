#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int n;
	int index = 0;
	scanf("%d", &n);
	getchar();

	char** line = (char**)malloc(sizeof(char*) * n);
	int* stack = (int*)malloc(sizeof(int) * n);

	for (int i = 0; i < n; i++) {
		line[i] = (char*)malloc(sizeof(char) * 15);
		fgets(line[i], 15, stdin);
	}

	for (int i = 0; i < n; i++) {
		char* command = strtok(line[i], " \n");
		char* value = strtok(NULL, " \n");

		if (strcmp(command, "push") == 0) {
			stack[index] = atoi(value);
			index++;
		}
		if (strcmp(command, "top") == 0) {
			if (index != 0) printf("%d\n", stack[index - 1]);
			else printf("%d\n", -1);
		}
		if (strcmp(command, "size") == 0) {
			printf("%d\n", index);
		}
		if (strcmp(command, "empty") == 0) {
			if (index != 0) printf("%d\n", 0);
			else printf("%d\n", 1);
		}
		if (strcmp(command, "pop") == 0) {
			if (index != 0) {
				index--;
				printf("%d\n", stack[index]);
			}
			else printf("%d\n", -1);
		}
	}
}