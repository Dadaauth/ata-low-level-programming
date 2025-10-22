#include <stdio.h>

/**
 * main - Entry point that determines if a number is even or odd
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	printf("Enter an integer: ");
	scanf("%d", &num);

	if (num % 2 == 0)
	{
		printf("%d is an even number.\n", num);
	}
	else
	{
		printf("%d is an odd number.\n", num);
	}

	return (0);
}
