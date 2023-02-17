#include <stdio.h>

/**
 *main - this will print all numbers of base 16 ussing putchar
 *
 *Return: 0
 */
int main(void)
{
	char a;
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	for (a = 'a'; a <= 'f'; a++)
	{
		putchar((char) a);
	}
	putchar('\n');
	return (0);
}
