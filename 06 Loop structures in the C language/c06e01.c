/*  INSTRUCTIONS


Write a program that prompts the user for an integer n (n>0) and prints the numbers 1,2,3...n on the screen one below the other. Write the program using the FOR statement.

Example output:

Enter an integer: 3
1
2
3

*/

#include <stdio.h>

int main()
{
    int input_number, i = 0;

    printf("Enter an integer: ");
    scanf("%d", &input_number);

    if (input_number > 0)
    {
        for (i = 1; i <= input_number; i++)
        {
            printf("%d\n", i);
        }
    }
    else
    {
        printf("You should give a positive integer");
    }

    return 0;
}