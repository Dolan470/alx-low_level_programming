#include "main.h"

/**
 * _abs - this will compute the absolute value of an imteger
 *
 * @num: the parameter to be computed
 *
 *Return: the absolute value of num
 */
int _abs(int num)
{
	if (num < 0)
		num *= -1;
	return (num);
}
