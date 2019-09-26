/*  INSTRUCTIONS

Write a simple calculator program that calculates the difference, sum or product of two numbers. First, the program asks which calculation to perform. After this, the program prompts for the numbers, performs the calculation and prints the result. The selection within the program has to be done using a switch() statement.

Example output:
1: subtraction
2: addition
3: multiplication
Select function:3
Enter the first number:45
Enter the second number:67
45*67=3015

*/

#include <stdio.h>

int main() {
	int input_1st_number, input_2nd_number, input_function, output_calculation;
	
	printf("1: subtraction\n2:addition\n3: multiplication\nSelect function: ");
	scanf("%d", &input_function);
	printf("Enter the first number: ");
	scanf("%d", &input_1st_number);
	printf("Enter the second number: ");
	scanf("%d", &input_2nd_number);
	switch (input_function) {
		case 1: {
			output_calculation = input_1st_number - input_2nd_number;
			printf("%d-%d=%d", input_1st_number, input_2nd_number, output_calculation);
			break;
		}
		case 2: {
			output_calculation = input_1st_number + input_2nd_number;
			printf("%d+%d=%d", input_1st_number, input_2nd_number, output_calculation);
			break;
		}
		case 3: {
			output_calculation = input_1st_number * input_2nd_number;
			printf("%d*%d=%d", input_1st_number, input_2nd_number, output_calculation);
			break;
		}
	}

	return 0;
}