#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: a pointer to the first string
 * @s2: a pointer to the second string
 * Return: 0 if the strings are equal, number > 0 if the first non-matching
 * character in s1 is greater (in ASCII) than that of s2.
 * and number < 0 if the first non-matching character in str1 is lower
 * (in ASCII) than that of str2.
 */

int _strcmp(char *s1, char *s2)
{
	char *p1 = s1, *p2 = s2;

	while (*p1 != '\0' && *p2 != '\0' && *p1 == *p2)
	{
		p1++;
		p2++;
	}
	return (*p1 - *p2);
}
