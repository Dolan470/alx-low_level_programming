#include <stdio.h>
#include "main.h"
/**
 * print_array - prints n elements of an array of integers.
 * @a: a parameter for an array of integers
 * @n: a parameter for the number of elements of the array to be printed
 * Return: 0
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%i", a[i]);
		if (i < n - 1)
			printf(", ");
		i++;
	}
	printf("\n");
}
