#ifndef PRINTF
#define PRINTF
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdarg.h>
#include <limits.h>
int put_char(char c);
void put_string(char *str);
int _printf(const char *format, ...);
void print_number(unsigned int n);
#endif
