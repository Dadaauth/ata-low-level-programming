#include <stdio.h>

/**
 * main - Prints odd numbers from 1 to 10
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 10; i++)
	{
		if (i % 2 == 0)
		{
			continue;
		}
		printf("%d\n", i);
	}

	return (0);
}
