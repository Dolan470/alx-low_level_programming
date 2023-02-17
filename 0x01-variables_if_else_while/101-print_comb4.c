#include <stdio.h>

/**
 *main - this will print all possible combination of three digits
 *
 *Return: 0
 */
int main(void)
{
	int i, j, k;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			for (k = '0'; k <= '9'; k++)
			{
				if (i < j && i < k && j < k &&
				i != j && j != k)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if ((i + j + k) != ('7' + '8' + '9'))
					{
						putchar(44);
						putchar(32);
					}
				}

			}
		}
	}
	putchar('\n');
	return (0);
}

