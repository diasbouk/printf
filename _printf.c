#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * _printf - printf function.
 * @format: format
 * Return: number of chars.
 */
int _printf(const char *format, ...)
{
	unsigned int i = 0;
	long int number;
	char c;
	char *str;
	va_list args;
		va_start(args, format);
		if (!format || (format[0] == '%' && !format[1]))
			return (-1);
		if (format[0] == '%' && format[1] == ' ' && !format[2])
			return (-1);
		while (format[i] != '\0')
		{
			if (format[i] == '%')
			{
				i++;
				if (format[i] == 'c')
				{
					i++;
					c = va_arg(args, int);
					put_char(c);
				}
				else if (format[i] == 's')
				{
					i++;
					str = va_arg(args, char *);
					put_string(str);
				}
				else if (format[i] == 'd' || format[i] == 'i')
				{
					i++;
					number = va_arg(args, int);
					print_number(number);
				}
				else if (format[i] == '%')
				{
					put_char(format[i - 1]);
					i++;
				}
				else
					put_char('%');
			}
			else
			{
				put_char(format[i]);
				i++;
			}
		}
		va_end(args);
		return (i - 1);
}
