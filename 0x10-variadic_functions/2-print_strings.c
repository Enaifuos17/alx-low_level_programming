#include "variadic_functions.h"

/**
 * print_strings - prints string with separator
 *
 * @separator: string separator
 * @n: number of arguments
 * @...: strings
 *
 * Return: 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	int i = n;
	char *str;
	va_list ap;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
	while (i--)
	{
		printf("%s%s", (str = va_arg(ap, char *)) ? str : "(nil)",
				i ? (separator ? separator : "") : "\n");
	}
	va_end(ap);
}
