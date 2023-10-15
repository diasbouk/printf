#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 *
 */
int main(void)
{
int len;
int len2;
char *str = "iwfofifiwjfihewiufikfhoiwe\n";

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
	_printf("Unknown:[%r]\n");
	_printf(str);
	_printf("%K\n");
	_printf("%!\n");
	_printf("%c", '\0');
	_printf("%%\n");
	_printf("print a single precent %\n");
	_printf("%");
	_printf("%c", '\0');
	_printf(NULL);
	_printf("man ggc : \n%s\n", "strrrrrrrrrrrr");
	_printf("css%cccs%scscscs\n", 'T', "Test");
	_printf("char pointer null %s\n", (char *)0);
	return (0);
}
