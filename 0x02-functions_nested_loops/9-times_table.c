#include "main.h"
/**
 * times_table -  prints the 9 times table, starting with 0
 * row = row, col = column, dig = digits of current result
 * Return: times table
 * add extra space past single digit
 */
void times_table(void)
{
	int row, col, dig;

	for (row = 0; row <= 9; row++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (col = 1; col <= 9; col++)
		{
			dig = (row * col);
			if ((dig / 10) > 0)
			{
				_putchar((dig / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((dig % 10) + '0');

			if (col < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}

}
