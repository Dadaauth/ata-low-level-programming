#include <stdio.h>

/**
 * main - Checks if a number is prime
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num, i, is_prime = 1;

	printf("Enter a positive integer: ");
	scanf("%d", &num);

	if (num <= 1)
	{
		printf("%d is not a prime number.\n", num);
		return (0);
	}

	if (num == 2)
	{
		printf("%d is a prime number.\n", num);
		return (0);
	}

	for (i = 2; i * i <= num; i++)
	{
		if (num % i == 0)
		{
			is_prime = 0;
			break;
		}
	}

	if (is_prime)
	{
		printf("%d is a prime number.\n", num);
	}
	else
	{
		printf("%d is not a prime number.\n", num);
	}

	return (0);
}
