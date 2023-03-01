#include "main.h"

/**
 * _strcat - appends the src string to the dest string, overwriting
 * the terminating null byte (\0) at the end of dest, and then adds a
 * terminating null byte.
 *
 * @dest: a pointer for the destination string
 * @src: a pointer for the sorce string
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int len = 0, i = 0, k;

	while (dest[len] != '\0')
		len++;
	for (k = len; src[i] != '\0'; k++)
	{
		dest[k] = src[i];
		i++;
	}
	dest[k + 1] = '\0';
	return (dest);
}
