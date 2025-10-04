#include <stdio.h>

void printWelcomeMenu();
void printOptions();
void add();


void main() {

	printWelcomeMenu();

	printOptions();

	int inputNum;

	printf("Enter operation number: ");
	scanf_s("%1o", &inputNum);

	switch (inputNum)
	{
	case 1:
		add();
	case 2:
		subtract();
	}

}

void printWelcomeMenu() {
	printf(" **********************\n");
	printf("**   Welcome to the   **\n");
	printf("**   BCS Calculator   **\n");
	printf(" **********************\n");
}

void printOptions() {
	printf("1. Add\n");
	printf("2. Subtract\n");
}

void add() {
	double num1, num2, result;
	printf("Enter the first value: ");
	if (scanf("%lf", &num1) != 1) {
		printf("Invalid input.\n");
		return;
	}
	printf("Enter the second value: ");
	if (scanf("%lf", &num2) != 1) {
		printf("Invalid input.\n");
		return;
	}
	result = num1 + num2;
	printf("%g - %g = %g\n", num1, num2, result);
}

void subtract(void) {
	double num1, num2, result;
	printf("Enter the first value: ");
	if (scanf("%lf", &num1) != 1) {
		printf("Invalid input.\n");
		return;
	}
	printf("Enter the second value: ");
	if (scanf("%lf", &num2) != 1) {
		printf("Invalid input.\n");
		return;
	}
	result = num1 - num2;
	printf("%g - %g = %g\n", num1, num2, result);
}