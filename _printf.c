#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * _printf - produces output according to a format
 * @format: character string
 *
 * @...: args
 *
 * Return:  the number of characters printed exculde null byte
*/
int _printf(const char *format, ...)
{
	va_list args;

	 format_t ops[] = {
                                {"%c", print_char},
                                {"%s", print_str},
                                {"%%", print_mod},
                                {"%d", print_int},
                                {"%i", print_int},
                        };

	int i = 0;
	int j = 0;

	va_start(args, format);

	if (format == NULL)
		return (-1);

	for (i = 0; format[i] != '\0'; i++)
	{
		char p = format[i];

		if (p == '%')
		{
			char z = format[i + 1];
			z =  malloc()


			for (j = 0; j < 5; j++)
			{
				if (x == ops[j].format)
				       ops[j].a(args);	
			}

		}

		putchar(p);

		i++;
	}

		va_end(args);
		return (i);
}
