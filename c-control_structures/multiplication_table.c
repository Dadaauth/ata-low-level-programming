#include <stdio.h>

/**
 * main - Entry point that prints multiplication table of an integer
 *
 * Description: Takes an integer as input and prints its multiplication
 * table up to 10 using a for loop
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n, i;

	printf("Enter an integer: ");
	scanf("%d", &n);

	printf("Multiplication table of %d:\n", n);

	for (i = 1; i <= 10; i++)
	{
		printf("%d x %d = %d\n", n, i, n * i);
	}

	return (0);
}
