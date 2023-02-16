#include <stdio.h>

/**
 *main - this prints the size of various types on the computer it is compiled
 *and run on
 *
 * Return: 0
 */
int main(void)
{
	char c = 'c';
	int i = 1;
	long int l = 4;
	long long int d = 8;
	float f = 1.1;

	printf("Size of a char: %i byte(s)\n", sizeof(c));
	printf("Size of an int: %i byte(s)\n", sizeof(i));
	printf("Size of a long int: %i byte(s)\n", sizeof(l));
	printf("Size of a long long int: %i byte(s)\n", sizeof(d));
	printf("Size of a float: %i byte(s)\n", sizeof(f));
	return (0);
}
