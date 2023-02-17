#include <stdio.h>

/**
 *main - this will print the smallest different combination of two digits
 *
 *Return: 0
 */
int main(void)
{
	int i, j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			if (i < j && i != j)
			{
				putchar(i);
				putchar(j);
				if ((i + j) != ('8' + '9'))
				{
					putchar(44);
					putchar(32);
				}
			}

		}
	}
	putchar('\n');
	return (0);
}
