#include "main.h"
/**
 * print_diagonal - this prints a diagonal line on terminal
 * @n: a parameter fore teh
 * Rerurn: 0
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			if (i != 0)
			{
				for (j = 0; j < i; j++)
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
