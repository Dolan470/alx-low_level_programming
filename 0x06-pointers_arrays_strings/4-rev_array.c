#include "main.h"
/**
 * reverse_array - reverses the content of an array
 * @a: an int pointer to the array
 * @n: the length of the array
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
