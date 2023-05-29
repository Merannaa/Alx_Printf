#include "main.h"

/**
* print_str - format string
* @args: valist
* Return: number of characters to be printed
*/
int print_str(va_list args)
{
	int i;
	char *p;

	p = va_arg(args, char*);

	if (p == NULL)
	{
		p = "(null)";
	}

	for (i = 0; p[i] != '\0'; i++)
	{
		_putchar(p[i]);
	}

	return (i);
}
