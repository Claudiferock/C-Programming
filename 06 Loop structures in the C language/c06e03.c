/*  INSTRUCTIONS

Write a program that asks for the students' exam scores (using integers 4 to 10) and calculates the average. The program must accept scores until entry is terminated by a negative integer. Finally, the program prints out the number of scores and the calculated average with two decimal places of precision.

Hint:
You can write your program using either the while or do...while statement.

Example output:
The program calculates the average of scores you enter.
End with a negative integer.
Enter score (4-10):7
Enter score (4-10):8
Enter score (4-10):9
Enter score (4-10):10
Enter score (4-10):4
Enter score (4-10):4
Enter score (4-10):5
Enter score (4-10):-1
You entered 7 scores.
Average score: 6.71

*/

#include <stdio.h>

int main()
{
    int input_number;
    float score_average, score_sum, score_amount = 0;
    printf("The program calculates the average of scores you enter.\nEnd with a negative integer.\n");
    do
    {
        printf("Enter score (4-10):");
        scanf("%d", &input_number);
        if (input_number >= 0)
        {
            score_sum = input_number + score_sum;
            score_amount++;
        }
    }

    while (input_number >= 0);
    score_average = score_sum / score_amount;

    printf("You entered %.0f scores.\nAverage score: %.2f\n", score_amount, score_average);

    return 0;
}