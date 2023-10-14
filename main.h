#ifndef PRINTF
#define PRINTF
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdarg.h>
int _putchar(char c);
int _printf(const char *format, ...);
void print_number(unsigned int n);
#endif
