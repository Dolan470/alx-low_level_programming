#include <stdio.h>

/**
 *main - this will print a to z folowed by A to Z
 *
 *Return: 0
 */
int main(void)
{
	char a, b;

	for (a = 97; a <= 122; a++)
	{
		putchar((char) a);
	}
	for (b = 65; b <= 90; b++)
	{
		putchar((char) b);
	}
	putchar('\n');
	return (0);
}
