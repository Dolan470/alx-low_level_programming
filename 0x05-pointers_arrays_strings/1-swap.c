#include "main.h"
/**
 * swap_int - swaps the value of two integers
 * @a: a parameter for the location of int a in memory
 * @b: a parameter for the location of int b in memory
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
