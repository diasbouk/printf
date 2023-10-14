#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void print_number(unsigned int n)
{
    int *num = malloc(sizeof(int) * 4);
    int i;
        i = 0;
    while (n != 0)
    {
        num[i] = n % 10;
        n = n / 10;
        i++;
    }
    while (i >= 0)
    {
        putchar(num[i]);
        i--;
    }
    free(num);
}

