#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_number - function to print numbers
 * @n: number arg
 * Return: number length
 */
int print_number(long int n)
{
	long m;
	int c, d = 0;
	long  int number;

		number = n;
		if (number < 0)
		{
			number = -number;
			put_char('-');
			d++;
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
				d++;
				number = -1;
			}
			else
			{
				put_char((number / m % 10) + '0');
				d++;
				m /= 10;
			}
		}
		return (d);
}
