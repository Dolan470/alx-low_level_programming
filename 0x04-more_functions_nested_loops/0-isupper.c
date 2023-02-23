#include "main.h"

/**
 * _isupper - this will check if charcter c is an uppercase
 * @c: a parameter to be checked if uppercase
 * Return: 1 if c is uppercase and 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);

}
