#ifndef PRINTF
#define PRINTF
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdarg.h>
#include <limits.h>
int put_char(char c);
int put_string(char *str);
int handle_format(const char *format, va_list args);
int _printf(const char *format, ...);
void handle_spec(char spec, int i);
int print_number(long int n);
#endif
