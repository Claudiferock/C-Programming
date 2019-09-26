/*  INSTRUCTIONS

Write a program that first asks the user for his/her gender and then for his/her age. Finally, the program prints a statement in accordance with the following instructions: Male 0 to 55 years: "You are a man in your best years!", Male 56-100 years: "You are a wise man!", Female 0-55 years: "You are a beauty!", Female 56-100 years: "You look young for your age!", Otherwise "An error occurred in the program!" The age shall be processed as an integer variable and the gender as a character variable (m/f). You do not need to account for upper case letters.

Hint:
Spend enough time on program design before you start typing your program. You can get help for the exercise in the learning material for Chapter 4.

Example output:
Are you male or female (m/f)?f
Enter your age:18
You are a beauty!

*/

#include <stdio.h>

int main() {
	char gender;
	int age;
	
	printf("Are you male or female (m/f)? ");
	scanf("%c", &gender);
	printf("Enter your age: ");
	scanf("%d", &age);
	if (gender == 'm' && age <= 55) {
		printf("You are a man in your best years!");
	} else if (gender == 'm' && age > 55) {
		printf("You are a wise man!");
	} else if (gender == 'f' && age <= 55) {
		printf("You are a beauty!");
	} else if (gender == 'f' && age > 55) {
		printf("You look young for your age!");
	} else {
		printf("An error occurred in the program");
	}
	
	return 0;
}