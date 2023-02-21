#include "main.h"

/**
 *print_alphabet_x10 - this will print the alphabet in lowercase ten times
 *
 *Return: 0
 */
void print_alphabet_x10(void)
{
	char a;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (a = 'a'; a <= 'z'; a++)
			_putchar(a);
		_putchar('\n');
	}
}
