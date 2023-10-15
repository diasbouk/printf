#include "main.h"

/**
 * put_string - function to put string
 * @str: string to be printed
 */
void put_string(char *str)
{
	int i = 0;
		if (str != NULL)
			while (str[i] != '\0')
			{
				put_char(str[i]);
				i++;
			}
		if (str == NULL)
			put_string("(null)");
}
