#include "main.h"

/**
 * _printf - printf function
 * @format: format
 */
int _printf(const char *format, ...)
{
	int i = 0;
	if (format == NULL)
		return (-1);
	while (format[i])
	{
		_putchar(format[i]);
		i++;
	}
	return (i + 1);
}
