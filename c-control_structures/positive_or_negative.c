#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Takes an integer as input and prints whether
 * it is positive, negative, or zero.
 *
 * Return: 0 (Success), 1 (Invalid input)
 */
int main(void)
{
	int num;
	int result;
	char c;

	printf("Enter an integer: ");
	result = scanf("%d", &num);

	if (result != 1)
	{
		fprintf(stderr, "Error: Invalid input. Please enter an integer.\n");
		return (1);
	}

	/* Check if there's any trailing non-whitespace character */
	result = scanf("%c", &c);
	if (result == 1 && c != '\n' && c != ' ' && c != '\t')
	{
		fprintf(stderr, "Error: Invalid input. Please enter an integer.\n");
		return (1);
	}

	if (num > 0)
	{
		printf("%d is a positive number.\n", num);
	}
	else if (num < 0)
	{
		printf("%d is a negative number.\n", num);
	}
	else
	{
		printf("%d is zero.\n", num);
	}

	return (0);
}
