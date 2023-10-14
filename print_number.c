#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void print_number(unsigned int n)
{
	long m;
	int c;
	long  int number;

		number = n ;
		if (number < 0)
		{
			number = -number;
			_putchar('-');
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
				_putchar(number % 10 + '0');
				number = -1;
			}
			else
			{
				_putchar((number / m % 10) + '0');
				m /= 10;
			}
		}
}
