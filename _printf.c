#include "main.h"

/**
 * _printf - printf function.
 * @format: format
 * Return: number of chars.
 */
int _printf(const char *format, ...)
{
	unsigned int i = 0;
	unsigned int j = 0;
	int number;
	char *str;
	va_list args;
		va_start(args, format);
		if (format == NULL)
			return (-1);
		while (format[i] != '\0')
		{
			if (format[i] == '%')
			{
				i++;
				if (format[i] == 'c')
				{
					i++;
					_putchar(va_arg(args, int));
				}
				else if(format[i] == 's')
				{
					i++;
					str = va_arg(args, char *);
					while (str[j] != '\0')
					{
						_putchar(str[j]);
						j++;
					}
				}
				else if ( format[i] == 'd')
				{
					i++;
					number = va_arg(args, int);
					_putchar(number);
				}
				else if (format[i] == 'i')
				{
					number = va_arg
			}
			_putchar(format[i]);
			i++;
		}
		va_end(args);
		return (i);
}
