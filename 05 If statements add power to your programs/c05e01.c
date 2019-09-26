/*  INSTRUCTIONS

Write a program that prompts the user for an integer and checks whether it is even or odd. If the number is even, print "Number 2 is even.", if it is odd, print "Number 1 is odd.".

Hint:
The program is almost the same as in the previous chapter. The new part is: If the remainder is zero, print "even". If the remainder is one, print "odd". Otherwise print an error message.

Example output:
Enter an integer: 1978
Number 1978 is even.

*/

#include <stdio.h>

int main (){
	int input_number;
	
	printf("Enter an integer: ");
	scanf("%d", &input_number);
	
	if (input_number%2 == 0) {
		printf("Number %d is even.", input_number);
	}
	else if (input_number%2 == 1) {
		printf("Number %d is odd.", input_number);
	}
	else {
		printf("error");
	}

	return 0;
}