#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: a parameter for a string
 * Return: 0
 */
void puts_half(char *str)
{
	int len = 0, mid, i;

	while (str[len] != '\0')
		len++;
	if (len % 2 != 0)
		mid = (len + 1) / 2;
	else
		mid = len / 2;
	for (i = mid; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
