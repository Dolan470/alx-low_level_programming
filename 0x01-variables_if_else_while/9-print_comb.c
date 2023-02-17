#include <stdio.h>

/**
 *main - this will print all possible combinations of sigle numbers
 *
 *Return: 0
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		if (i < '9')
		{
			putchar((char) 44);
			putchar((char) 32);
		}
	}
	putchar('\n');
	return (0);

}
