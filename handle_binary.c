#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/**
 * handle_binary - turn integer to binary 0/1
 * @decimal: number to transform
 * Return: number lenth
 */
int handle_binary(int decimal)
{
	 int binary = 0, i = 1, remainder;
		while (decimal != 0)
		{
			remainder = decimal % 2;
			decimal /= 2;
			binary += remainder * i;
			i *= 10;
		}
	return (print_number(binary));
}

