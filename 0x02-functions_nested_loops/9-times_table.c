#include "main.h"
/**
 * times_table - outputs the values of the nine times table
 * @void: no parameters
 *
 * Description: multiplies numbers by nine
 *
 * Return: no return value
 *
 */

void times_table (void)
{
	int n, row, col, prod;

	if (n >= 0 && n < 15)
	{
		for (row = 0; row <= n; row++)
		{
			for (col = 0; col <= row; col++)
			{
				prod = row * col;
				if (prod <= 9)
				{
					if (col != 0)
					{
						_putchar(",");
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
					_putchar('0' + prod);
					
				}
				else if (prod > 99)
				{
					_putchar(',');
					_putchar(' ');
					_putchar('0' + (prod / 100));
					_putchar('0' + (prod / 10) % 10);
					_putchar('0' + (prod % 10));
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar('0' + (prod / 100));
					_putchar('0' + (prod / 10) % 10);
					_putchar('0' + (prod % 10));
				}
			}
			_putchar('\n');

	}
}
		



}
