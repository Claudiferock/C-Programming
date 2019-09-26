#include <stdio.h>

/*  INSTRUCTIONS

The purpose of this exercise is to introduce you to authoring programs in the C language.
The following is a program in C. Your task is to rewrite the program.
In the next chapter, you will learn how the program works and what it does.

#include <stdio.h>

int main(void){
  int number;
  printf("Enter a number:");
  scanf("%d", &number);
  printf("The number was: %d\n",number);
  return 0;
} 

exmple output

Enter a number:83
The number was: 83

The output of the program must be exactly the same as the example output (the most strict comparison level)

*/

int main(void) {
	int inputNumber;
	printf("Enter a number:");
	scanf("%d", &inputNumber);
	printf("The number was: %d\n", inputNumber);
	return 0;
}