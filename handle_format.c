#include "main.h"

/**
 * handle_format - function to handle input of printf
 * format - input
 * agrs: arguments
 * Return: number of chars printed
 */

int handle_format(const char *format, va_list chars)
{
	int count = 0;
	int c;
	char *str;

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
			{
				c = va_arg(chars, int);
				put_char(c);
				format++;
				count++;
			}
			else if (*format == 's')
			{
				str = va_arg(chars, char *);
				count = count + put_string(str);
				format++;
			}
			else if (*format == '%')
			{
				put_char('%');
				count++;
				format++;
			}
		}
			put_char(*format);
			count++;
			format++;
	}
	return (count);
}
