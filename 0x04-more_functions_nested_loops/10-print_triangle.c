#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: a parameter for the size of the triangle
 * Return: 0
 */
void print_triangle(int size)
{
	int row, column, space;

	if (size > 0)
	{
		for (row = 0; row < size; row++)
		{
			for (space = 0; space < size - row - 1; space++)
			{
				_putchar(' ');
			}
			for (column = 0; column <= row; column++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
