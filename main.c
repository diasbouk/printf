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
	int len;
	int len2;
	unsigned int ui;
	void *addr;
		_printf("Let's try to printf a simple sentence.\n");
		_printf("here we go\n");
		_printf("printf\n");
		_printf("is\n");
		_printf("alx\n");
		_printf("!\n");
		_printf("this is alx\n");
		_printf("this is.\n");
		_printf("dias & enissay\n");
		_printf("here we go again !\n");
		_printf("another on here\n");
		_printf("-------another one here:--------\n");
		_printf("unsigned int ui\n");
		_printf("int , void\n");
		_printf("\\\\\\\\\\\\\\\n");
		_printf("always 0\n");
		_printf("char is a character\n");
		_printf("char\n");
		_printf("c is not easy\n");
		printf("Let's try to printf a simple sentence.\n");
		_printf("test %s\n", "string");
		_printf("%%\n");
		_printf("%!\n");
		 _printf("%s\n", "");
		 _printf("----------------\n");
		 _printf("%s\n", (char *)0);
		 _printf("Numbers : %d %i\n", 21, 34);
		 _printf("%\n");
		 len = _printf("Let's try to printf a simple sentence.\n");
		 len2 = printf("Let's try to printf a simple sentence.\n");
		 ui = (unsigned int)INT_MAX + 1024;
		 addr = (void *)0x7ffe637541f0;
		 _printf("Length:[%d, %i]\n", len, len);
		 printf("Length:[%d, %i]\n", len2, len2);
		 _printf("Negative:[%d]\n", -762534);
		 printf("Negative:[%d]\n", -762534);
		_printf("Unsigned:[%u]\n", ui);
		printf("Unsigned:[%u]\n", ui);
		_printf("Address:[%p]\n", addr);
		printf("Address:[%p]\n", addr);
		len = _printf("Percent:[%%]\n");
		len2 = printf("Percent:[%%]\n");
		_printf("Len:[%d]\n", len);
		printf("Len:[%d]\n", len2);
		_printf("%b\n", 98);
		len = _printf("%K");
		printf("%d\n", len);
		return (0);
}
