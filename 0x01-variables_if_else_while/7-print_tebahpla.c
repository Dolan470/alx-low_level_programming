#include <stdio.h>

/**
 *main - this will print lower case alphabet in reverse using only putchar
 *
 *Return: 0
 */
int main(void)
{
	char a;

	for (a = 122; a >= 97; a--)
	{
		putchar((char) a);
	}
	putchar('\n');
	return (0);
}
