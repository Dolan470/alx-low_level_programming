#include "main.h"

/**
 * reset_to_98 - updates the value it points to to 98
 * @n: a parameter for pointer to n
 * Return: 0
 */
void reset_to_98(int *n)
{
	int *p = n;
	*p = 98;
}
