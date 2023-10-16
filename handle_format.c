#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdarg.h>
#include <limits.h>

/**
 * handle_format - function to deal with formats
 * @format: const chars ptr for input
 * @args: list of arguments
 * Return: number of charcters printed
*/
int handle_format(const char *format, va_list args)
{
	int sum = 0;
	int c;
	char *str;
		while (*format)
		{
			if (*format == '%')
			{

				format++;
				if (*format == 'c')
				{
					c = va_arg(args, int);
					put_char(c);
					format++;
					sum++;
				}
				else if (*format == 's')
				{
					str = va_arg(args, char *);
					sum += put_string(str);
					format++;
				}
				else if (*format == '%')
				{
					put_char('%');
					sum++;
					format++;
				}
			}
			else
			{
				put_char(*format);
				sum++;
				format++;
			}
		}
		return (sum);
}

