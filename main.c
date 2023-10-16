#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point.
 *
 * Return: Always 0 (success).
 *
 */
int main(void)
{
		_printf("Let's try to printf a simple sentence.\n");
		_printf("here we go\n");
		_printf("!\n");
		_printf("this is alx\n");
		_printf("this is.\n");
		_printf("dias & enissay\n");
		_printf("here we go again !\n");
		_printf("another on here\n");
		_printf("---------------\n");
		printf("Let's try to printf a simple sentence.\n");
		_printf("test %s\n", "string");
		_printf("%%\n");
		_printf("%!\n");
		 _printf("%s\n", "");
		 _printf("----------------\n");
		 _printf("%s\n", (char *)0);
		 _printf("Numbers : %d %i\n", 21, 34);
	return (0);
}
