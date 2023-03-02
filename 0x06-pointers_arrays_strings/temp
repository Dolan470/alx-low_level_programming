#include "main.h"

/**
 * cap_string - sapitalizes all words of a string
 * @str: a pointer to a string
 * Return: a pointer to str
 */
char *cap_string(char *str)
{
	char *p = str;

	while (*p != '\0')
	{
	if ((*p == ' ' || *p == 9 || *p == 10 || *p == ',' || *p == ';' ||
		*p == '.' || *p == '!' || *p == '?' || *p == '"' || *p == ')'
		|| *p == '(' || *p == '{' || *p == '}') &&
		(*(p + 1) <= 'z' && *(p + 1) >= 'a'))
	{
		*(p + 1) -= 32;
	}
	p++;
	}
	return (str);
}
