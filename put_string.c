#include "main.h"

/**
 * put_string - function to put string
 * @str: string to be printed
 * Return: number of chars
 */
int put_string(char *str)
{
	int i = 0;
		if (str != NULL)
		{
			while (*str)
			{
				put_char(*str);
				i++;
			}
		}
		if (str == NULL)
		{
			put_string("(null)");
			i = 6;
		}
		return (i);
}
