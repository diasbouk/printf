#include "main.h"
/**
 * _printf - main func
 * @format: format of string
 * Return: number of chars.
 */
int _printf(const char *format, ...)
{
	int sum;
	va_list chars;
		va_start(chars, format);
		if (!format)
		{
			return (-1);
		}
		sum = handle_format(format, chars);
		va_end(chars);
		return (sum);
}
