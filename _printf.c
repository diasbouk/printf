#include "main.h"

/**
 * _printf - printf function
 * @format: format
 */
int _printf(const char *format, ...)
{
	int i = 0;
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
				str = va_arg(args, char *);
				while (*str)
				{
					_putchar(*str);
					str++;
				}
			}
		}
		_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (i + 1);
}
