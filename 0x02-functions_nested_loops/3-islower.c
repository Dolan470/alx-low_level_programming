#include "main.h"
/**
 *_islower - this will check for lowercase character
 *
 *@c: parameter to be checked
 *
 *Return: 1 if c is lowercase and 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
