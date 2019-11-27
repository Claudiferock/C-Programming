/*  INSTRUCTIONS

Write a program that takes three integers as input and prints the smallest and largest of these numbers. The main program must prompt for integers and read them. Write the functions largest() and smallest() that receive the entered numbers as their parameters. Correspondingly, the functions shall return values corresponding to their names.

Hint:
You can use combined comparisons and the if-else structure in your program.

Example output:
Enter the 1. number:12355
Enter the 2. number:32145
Enter the 3. number:22112
Among the numbers you entered,
the largest was 32145 and the smallest was 12355.

*/

#include <stdio.h>

int largest(int number1, int number2, int number3);
int smallest(int number1, int number2, int number3);	

int main(){

	int input_number1, input_number2, input_number3, largest_output, smallest_output;
    printf("Enter the 1. number:");
    scanf("%d", &input_number1);
    printf("Enter the 2. number:");
    scanf("%d", &input_number2);
    printf("Enter the 3. number:");
    scanf("%d", &input_number3);

    largest_output = largest(input_number1, input_number2, input_number3);
    smallest_output = smallest(input_number1, input_number2, input_number3);

    printf("Among the numbers you entered,\n the largest was %d  and the smallest was %d.", largest_output, smallest_output);
	return 0;
}

int largest(int number1, int number2, int number3) {
    int largest_number;
    if (number1 >= number2 && number1 >= number3)
    {
        largest_number = number1;
    }
    else if (number2 >= number3)
    {
        largest_number = number2;
    }
    else
    {
        largest_number = number3;
    }
    return largest_number;
}

int smallest(int number1, int number2, int number3) {
    int smallest_number;
    if (number1 <= number2 && number1 <= number3)
    {
        smallest_number = number1;
    }
    else if (number2 <= number3)
    {
        smallest_number = number2;
    }
    else
    {
        smallest_number = number3;
    }
    return smallest_number;
}