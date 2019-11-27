/*  INSTRUCTIONS

Write a calculator program that calculates the sum, difference or product of two integers. The program asks for the type of calculation first (1 = sum, 2 = difference, 3 = product). After calculation, the result is printed on the screen and the program returns to prompt for the next calculation.

You should write a function for each calculation, prompting for the numbers, performing the desired calculation and printing the answer on the screen. The program is terminated by entering a negative number just like in the previous exercise.

Hint:
You can use the previous exercise as the body of your program. The functions carrying out the calculations and printing do not take any parameters or return any value.

Example output:
1: sum of two numbers
2: difference of two numbers
3: product of two numbers
<0: terminate the program
Select calculation:1
Enter the first number:55
Enter the second number:33
55 + 33 = 88

1: sum of two numbers
2: difference of two numbers
3: product of two numbers
<0: terminate the program
Select calculation:2
Enter the first number:14
Enter the second number:41
14 - 41 = -27

1: sum of two numbers
2: difference of two numbers
3: product of two numbers
<0: terminate the program
Select calculation:3
Enter the first number:4
Enter the second number:5
4 * 5 = 20

1: sum of two numbers
2: difference of two numbers
3: product of two numbers
<0: terminate the program
Select calculation:-1
Terminating the program...

*/

#include <stdio.h>

void sum(void);
void difference(void);
void product(void);

int main()
{
  int choice;
  do{
    printf("1: sum of two numbers");
    printf("2: difference of two numbers");
    printf("3: product of two numbers");
    printf("<0: terminate the program");
    printf("Select calculation:");
    scanf("%d", &choice);
    if(choice < 0) {
      printf("Terminating the program...");
    }
    else if(choice == 1) {
      sum();
    }
    else if(choice == 2) {
      difference();
    }
    else if(choice == 3) {
      product();
    }
    else {
      printf("You entered an invalid number.\n\n");
    }
  }while(choice>0);

  return 0;
}

void sum(void){
	int number1, number2, result;
	printf("Enter the first number:");
	scanf("%d", &number1);
	printf("Enter the second number:");
	scanf("%d", &number2);
	result = number1 + number2;
	printf("%d + %d = %d", number1, number2, result);
}

void difference(void){
	int number1, number2, result;
	printf("Enter the first number:");
	scanf("%d", &number1);
	printf("Enter the second number:");
	scanf("%d", &number2);
	result = number1 - number2;
	printf("%d - %d = %d", number1, number2, result);
}

void product(void){
	int number1, number2, result;
	printf("Enter the first number:");
	scanf("%d", &number1);
	printf("Enter the second number:");
	scanf("%d", &number2);
	result = number1 * number2;
	printf("%d * %d = %d", number1, number2, result);
}