#include <stdio.h>

/*  INSTRUCTIONS

Write a program that prompts the user for an integer, calculates the square and prints the result on the screen (also print out a newline character \n after the result). After printing, the program closes itself.

Hint:
The program can be written in quite much the same way as the example in the chapter. You can implement the program in many ways, but you will probably need two variables: one for the number entered by the user and one for the square. In the example, the addition operator + was used for calculating a sum. In this program, you need the multiplication operator *.


Example output:
Enter an integer: 11
The square of the number you entered is 121

*/

int main() {
	int input_number, squared_number;
	
	printf("Enter an integer: ");
	scanf("%d", &input_number);
	squared_number = input_number * input_number;
	printf("The square of the number you entered is %d\n", squared_number);

	return 0;
}