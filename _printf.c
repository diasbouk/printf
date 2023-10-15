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
		if (format == NULL || (format[0] == '%' && !format[1]))
			return (-1);
		while (format[i] != '\0')
		{
			if (format[i] == '%')
			{
				i++;
				if (format[i] == 'c')
				{
					c = va_arg(args, int);
					put_char(c);
					i++;
				}
				else if (format[i] == 's')
				{
					i++;
					str = va_arg(args, char *);
					put_string(str);
				}
				else if (format[i] == '%')
				{
					i++;
					put_char(format[i - 1]);
				}
				else if (format[i] == 'd' || format[i] == 'u' || format[i] == 'i')
				{
					i++;
					number = va_arg(args, long int);
					print_number(number);
				}
			}
			put_char(format[i]);
			i++;
		}
		va_end(args);
		return (i);
}
