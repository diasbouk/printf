#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_number - main func
 * @n: number
 */
void print_number(int n)
{
	long m;
	int c;
	long  int number;
		number = n;
		if (number < 0)
		{
			number = -number;
			put_char('-');
		}

		m = 1;
		c = 1;
		while (c)
		{
			if (number / (m * 10) > 0)
				m *= 10;
			else
				c = 0;
		}
		while (number >= 0)
		{
			if (m == 1)
			{
				put_char(number % 10 + '0');
				number = -1;
			}
			else
			{
				put_char((number / m % 10) + '0');
				m /= 10;
			}
		}
}
