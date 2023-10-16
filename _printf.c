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
	int num;
	va_list chars;

	va_start(chars, format);

	if (!format)
	{
		return (-1);
	}

	num = handle_format(format, chars);
	va_end(chars);
	return (num);
}
