#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Takes an integer as input and uses the ternary operator
 * to determine if it's positive or non-positive. Prints an appropriate message.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int num;

	printf("Enter an integer: ");
	scanf("%d", &num);

	(num > 0) ? printf("%d is a positive number.\n", num) :
		printf("%d is a non-positive number.\n", num);

	return (0);
}
