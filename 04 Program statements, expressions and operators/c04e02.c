/*  INSTRUCTIONS


Write a program that prompts the user for an integer and checks whether it is even or odd. If the number is even, print the value 0, and if it is odd, print the value 1.

Hint:
A number is even if the remainder from division by two is zero.

Example output:
Enter an integer: 83
The number is 1

*/

#include <stdio.h>

int main(){
	int input_number, remainder;
	printf("Enter an integer: ");
	scanf("%d", &input_number);
	if (input_number%2 == 0) {
		remainder = 0;
	}
	else {
		remainder = 1;
	}
	
	printf("The number is %d", remainder);

	return 0;
}