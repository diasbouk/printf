#include "main.h"
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
	int sum = 0, num;
	char *str;
		while (*format)
		{
			if (*format == '%')
			{
				format++;
				if (*format == 'c')
				{
					put_char(va_arg(args, int));
					format++;
					sum++;
				}
				else if (*format == 's')
				{
					str = va_arg(args, char *);
					sum += put_string(str);
					format++;
				}
				else if (*format == 'd' || *format == 'i')
				{
					num = va_arg(args, int);
					sum += print_number(num);
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
