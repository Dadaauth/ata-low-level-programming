#include <stdio.h>

/**
 * main - Entry point that determines if a character is a vowel or consonant
 *
 * Description: Reads a single character and determines if it is a vowel
 * or a consonant using the logical OR operator (||)
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char ch;

	printf("Enter a character: ");
	scanf(" %c", &ch);

	/* Check if the character is a vowel using logical OR operator */
	if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
	    ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
	{
		printf("'%c' is a vowel.\n", ch);
	}
	else
	{
		printf("'%c' is a consonant.\n", ch);
	}

	return (0);
}
