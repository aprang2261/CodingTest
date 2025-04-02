#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	float credit;
	float totalCredit = 0;
	float totalGrade = 0;

	for (int i = 0; i < 20; i++) {
		char S[50];
		char grade[3];

		scanf("%s %f %s", S, &credit, grade);

		if (strcmp(grade, "A+") == 0) {
			totalGrade = totalGrade + 4.5 * credit;
			totalCredit = totalCredit + credit;
		}
		else if (strcmp(grade, "A0") == 0) {
			totalGrade = totalGrade + 4.0 * credit;
			totalCredit = totalCredit + credit;
		}
		else if (strcmp(grade, "B+") == 0) {
			totalGrade = totalGrade + 3.5 * credit;
			totalCredit = totalCredit + credit;
		}
		else if (strcmp(grade, "B0") == 0) {
			totalGrade = totalGrade + 3.0 * credit;
			totalCredit = totalCredit + credit;
		}
		else if (strcmp(grade, "C+") == 0) {
			totalGrade = totalGrade + 2.5 * credit;
			totalCredit = totalCredit + credit;
		}
		else if (strcmp(grade, "C0") == 0) {
			totalGrade = totalGrade + 2.0 * credit;
			totalCredit = totalCredit + credit;
		}
		else if (strcmp(grade, "D+") == 0) {
			totalGrade = totalGrade + 1.5 * credit;
			totalCredit = totalCredit + credit;
		}
		else if (strcmp(grade, "D0") == 0) {
			totalGrade = totalGrade + 1.0 * credit;
			totalCredit = totalCredit + credit;
		}
		else if (strcmp(grade, "F") == 0) {
			totalCredit = totalCredit + credit;
		}
		else {

		}
	}
	printf("%0.4f", totalGrade / totalCredit);
}