#include "main.h"

/**
 * _printf - printf function
 * @format: format
 */
int _printf(const char *format, ...)
{
	int i = 0;
	char c;
	char *str;
	va_list args;
	va_start(args, format);
	if (format == NULL)
		return (-1);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'c')
			{
				write(1,va_arg(args, char *), 1);
			}
			if (format[i] == 's')
			{
				write(1, va_arg(args, char *), strlen(va_arg(args, char*)));
			}
		}
		else
			_putchar(format[i]);
			i++;
	}
	va_end(args);
	return (i + 1);
}
