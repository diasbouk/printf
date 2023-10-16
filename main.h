#ifndef PRINTF
#define PRINTF
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdarg.h>
#include <limits.h>
int handle_format(const char *format, va_list chars);
int put_char(char c);
int put_string(char *str);
int _printf(const char *format, ...);
void handle_spec(char spec, int i);
#endif
