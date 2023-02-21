#include "main.h"

/**
 * print_last_digit - this will print the last digit of num
 *
 *@num: the parameter to be printed
 *
 *Return: the value of the last digit of num
 */
int print_last_digit(int num)
{
	num = num % 10;
	if (num < 0)
		num = -(num);
	_putchar(num + '0');
	return (num);
}
