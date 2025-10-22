#include <stdio.h>

/**
 * main - Entry point for a simple calculator using switch statement
 *
 * Description: Takes two numbers and an operator (+, -, *, /) as input
 * from the user and performs the corresponding arithmetic operation
 * using a switch statement.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	double num1, num2;
	char operator;

	printf("Enter two numbers: ");
	scanf("%lf %lf", &num1, &num2);

	printf("Enter an operator (+, -, *, /): ");
	scanf(" %c", &operator);

	switch (operator)
	{
		case '+':
			printf("%.1f + %.1f = %.1f\n", num1, num2, num1 + num2);
			break;
		case '-':
			printf("%.1f - %.1f = %.1f\n", num1, num2, num1 - num2);
			break;
		case '*':
			printf("%.1f * %.1f = %.1f\n", num1, num2, num1 * num2);
			break;
		case '/':
			if (num2 != 0)
			{
				printf("%.1f / %.1f = %.1f\n", num1, num2, num1 / num2);
			}
			else
			{
				printf("Error: Division by zero!\n");
			}
			break;
		default:
			printf("Error: Invalid operator!\n");
			break;
	}

	return (0);
}
