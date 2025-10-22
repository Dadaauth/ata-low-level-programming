#include <stdio.h>

/**
 * main - Entry point that counts digits in an integer
 *
 * Description: Takes an integer as input and counts the number
 * of digits in it using a do-while loop
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int num, count = 0;

	printf("Enter an integer: ");
	scanf("%d", &num);

	/* Handle negative numbers by converting to positive */
	if (num < 0)
	{
		num = -num;
	}

	/* Count digits using do-while loop */
	do {
		count++;
		num /= 10;
	} while (num != 0);

	printf("Number of digits: %d\n", count);

	return (0);
}
