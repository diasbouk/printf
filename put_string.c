#include "main.h"

/**
 * put_string - function to put string
 * @str: string to be printed
 */
void put_string(char *str)
{
	if (str != NULL)
	{
	int i = 0;
		while (str[i] != '\0')
		{
			put_char(str[i]);
			i++;
		}
		}
}
