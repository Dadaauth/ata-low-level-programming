#include <stdio.h>

/**
 * main - Entry point that finds and prints the largest of three integers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num1, num2, num3, largest;

	printf("Enter three integers: ");
	scanf("%d %d %d", &num1, &num2, &num3);

	largest = num1;

	if (num2 > largest)
	{
		largest = num2;
	}

	if (num3 > largest)
	{
		largest = num3;
	}

	printf("%d is the largest number.\n", largest);

	return (0);
}
