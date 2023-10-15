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
	long int i = 0;
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
					put_char(va_arg(args, int));
				}
				else if (format[i] == 's')
				{
					i++;
					str = va_arg(args, char *);
					put_string(str);
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
