#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <limits.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

typedef struct format
{
    char *r;
    int (*a)();
       
} format_t;

int _printf(const char *format, ...);
int print_str(va_list args);
int print_char(va_list args);
int print_mod(char *format, va_list args);
int print_int(va_list args);

#endif
