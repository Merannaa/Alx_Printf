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

	int i = 0;

	va_start(args, format);

	if (format == NULL)
		return (-1);

	for (i = 0; format[i] != '\0'; i++)
	{
		char p = format[i];

		if (p == '%')
		{
			format_t ops[] = {
				{'c', print_char},
				{'s', print_str},
				{'%', print_mod},
				{'d', print_int},
				{'i', print_int},
				{'b', print_binary},
				{'u', print_unsigned_int},
				{'o', print_oct},
				{'x', print_hex},
				{'X', print_HEX},
				{'R', print_rot13},
				{'r', Print_rev}
			};
		}

		_putchar(p);

		i++;

		va_end(args);
		return (i);
}

