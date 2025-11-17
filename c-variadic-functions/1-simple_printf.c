#include <stdarg.h>
#include <unistd.h>

/**
 * print_char - Prints a single character
 * @c: Character to print
 */
void print_char(char c)
{
	write(1, &c, 1);
}

/**
 * print_string - Prints a string
 * @str: String to print
 */
void print_string(char *str)
{
	int i = 0;

	if (str == NULL)
		str = "(null)";

	while (str[i] != '\0')
	{
		print_char(str[i]);
		i++;
	}
}

/**
 * print_number - Prints an integer
 * @n: Integer to print
 */
void print_number(int n)
{
	unsigned int num;

	if (n < 0)
	{
		print_char('-');
		num = -n;
	}
	else
	{
		num = n;
	}

	if (num / 10)
		print_number(num / 10);

	print_char((num % 10) + '0');
}

/**
 * _printf - Simplified printf function
 * @format: Format string with specifiers
 * @...: Variable arguments
 *
 * Description: Handles %c (character), %i (integer), and %s (string)
 */
void _printf(const char *format, ...)
{
	va_list args;
	int i = 0;

	va_start(args, format);

	while (format && format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			i++;
			if (format[i] == 'c')
			{
				print_char(va_arg(args, int));
			}
			else if (format[i] == 'i')
			{
				print_number(va_arg(args, int));
			}
			else if (format[i] == 's')
			{
				print_string(va_arg(args, char *));
			}
			else if (format[i] == '%')
			{
				print_char('%');
			}
			else
			{
				print_char('%');
				print_char(format[i]);
			}
		}
		else
		{
			print_char(format[i]);
		}
		i++;
	}

	va_end(args);
}
