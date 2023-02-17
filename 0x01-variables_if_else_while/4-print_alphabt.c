#include <stdio.h>

/**
 *main - this will print the alphabet in lowercase except q and e using putchar
 *
 *Return: 0
 */
int main(void)
{
	char a;

	for (a = 97; a <= 122; a++)
	{
		if (a != 101 && a != 113)
			putchar((char) a);
		else
			continue;
	}
	putchar('\n');
	return (0);
}
