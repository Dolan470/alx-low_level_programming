#include <stdio.h>

/**
 *main - this will print from a to z
 *
 *Return: 0
 */
int main(void)
{
	char a = 97;

	for (a = 97; a <= 122; a++)
	{
		putchar((char) a);
	}
	putchar('\n');
	return (0);
}
