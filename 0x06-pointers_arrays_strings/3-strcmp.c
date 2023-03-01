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
	int i, k;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] == s2[i])
		{
			return (0);
		}
		else
		{
			k = s1[i] - s2[i];
			return (k);
		}

	}
	return (0);
}
