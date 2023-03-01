#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @str: a pointer to a string
 * Return: a pointer to str
 */
char *string_toupper(char *str)
{
	char *p = str;

	while (*p != '\0')
	{
		if (*p <= 'z' && *p >= 'a')
			*p -= 32;
		p++;
	}
	return (str);
}
