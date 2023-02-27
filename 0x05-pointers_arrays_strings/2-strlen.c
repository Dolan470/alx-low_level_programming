#include "main.h"
/**
 * _strlen - calculates the length of a string
 * @s: a parameter for a string
 * Return: the length of string s
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
