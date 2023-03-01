#include "main.h"

/**
 * *_strncpy - copies string src to string dest
 * @dest: a pointer to the destination string
 * @src: a pointer to the src string
 * @n: the number of charcters that will be copied
 * Return: a pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);

}
