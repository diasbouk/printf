#include "main.h"

/**
 * put_string - function to put string
 * @str: string to be printed
 * Return: number of chars
 */
void put_string(char *str)
{
		if (str != NULL)
		{
			while (*str)
			{
				put_char(*str);
				str++;
			}
		}
		if (str == NULL)
		{
			put_string("(null)");
		}
}
