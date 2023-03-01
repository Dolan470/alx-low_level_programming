#include "main.h"

/**
 * *_strncat - concatenates two strings, it will use at most n bytes from src
 * @dest: a pointer to the destination string
 * @src: a pointer to the sorce string
 * @n: the amount of bytes that will be copied from src
 * Return: a pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = 0, i;

	while (dest[len] != '\0')
		len++;
	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[len] = src[i];
		len++;
	}
	dest[len] = '\0';
	return (dest);
}
