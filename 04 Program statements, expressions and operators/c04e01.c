#include <stdio.h>

/*  INSTRUCTIONS

Write a program that prompts the user for two integers and prints the sum, difference and product of the numbers on the screen.

Hint:
This exercise is an excellent opportunity for practicing how to print several variables in one printf() statement. The variables in the program are integer variables.

Example output:
Enter the first number:83
Enter the second number:78

83+78=161
83-78=5
83*78=6474

*/


int main(){
	int input_number_1st, input_number_2nd, sum, difference, product;
	
	printf("Enter the first number: ");
	scanf("%d", &input_number_1st);
	printf("Enter the second number: ");
	scanf("%d", &input_number_2nd);
	
	sum = input_number_1st + input_number_2nd;
	difference = input_number_1st - input_number_2nd;
	product = input_number_1st * input_number_2nd;
	
	printf("%d+%d=%d\n", input_number_1st, input_number_2nd, sum);
	printf("%d-%d=%d\n", input_number_1st, input_number_2nd, difference);
	printf("%d*%d=%d\n", input_number_1st, input_number_2nd, product);

	return 0;
}