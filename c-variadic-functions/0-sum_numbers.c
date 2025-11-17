#include <stdarg.h>

/**
 * sum_all - Calculates the sum of an arbitrary number of integers
 * @count: The number of integers to sum
 * @...: Variable number of integers to sum
 *
 * Return: The sum of all the integers
 */
int sum_all(int count, ...)
{
	va_list args;
	int sum = 0;
	int i;

	va_start(args, count);

	for (i = 0; i < count; i++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);

	return sum;
}
