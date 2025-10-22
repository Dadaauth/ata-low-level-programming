#include <stdio.h>

/**
 * main - Entry point that calculates letter grade from numerical score
 *
 * Description: Takes a numerical score (0-100) as input and prints the
 * corresponding letter grade using if-else if-else statements with
 * logical AND (&&) operator for grade ranges.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int score;

	printf("Enter your score (0-100): ");
	scanf("%d", &score);

	if (score >= 95 && score <= 100)
	{
		printf("Your grade is A\n");
	}
	else if (score >= 85 && score <= 94)
	{
		printf("Your grade is B\n");
	}
	else if (score >= 61 && score <= 84)
	{
		printf("Your grade is C\n");
	}
	else if (score >= 46 && score <= 60)
	{
		printf("Your grade is D\n");
	}
	else if (score >= 0 && score <= 45)
	{
		printf("Your grade is F\n");
	}
	else
	{
		printf("Invalid score. Please enter a score between 0 and 100.\n");
	}

	return (0);
}
