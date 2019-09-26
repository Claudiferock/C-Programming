#include <stdio.h>

/*  INSTRUCTIONS

Write a program that first asks the user for an integer and after that, a floating-point number. Finally, the program prints both numbers on the screen. The floating-point number shall be printed with two decimal places of precision.

Example output:
Enter an integer: 14
Enter a decimal number:3.123

You entered the integer: 14
You entered the decimal number, rounded to two decimal places: 3.12

*/

int main () {
	int input_integer;
	float input_decimal;
	
	printf("Enter an integer: ");
	scanf("%d", &input_integer);
	printf("Enter a decimal number: ");
	scanf("%f", &input_decimal);
	
	printf("You entered the integer: %d\n", input_integer);
	printf("You entered the decimal number, rounded to two decimal places: %.2f", input_decimal);
	
	return 0;
}