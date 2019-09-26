#include <stdio.h>

/*  INSTRUCTIONS

Write a program that prompts the user for an amount in Finnish markka and converts it to euro. Finally, the program prints the amount on the screen in euro with two decimal places of precision. The euro conversion factor is 5.94573.

Hint:
You need three variables: one for the conversion factor, one for markka and one for euro. The required division can be accomplished by using the "/" character.


Example output:
Enter an amount in FIM:9.90
FIM converted to euro: 1.67

The verification of program output does not account for whitespace characters like "\n", "\t" and " "

*/

int main() {
	float input_markka, output_euro, conversion_factor;
	conversion_factor = 5.94573;
	
	printf("Enter an amount in FIM: ");
	scanf("%f", &input_markka);
	output_euro = input_markka / conversion_factor;
	printf("FIM converted to euro: %.2f", output_euro);
	

	return 0;
}