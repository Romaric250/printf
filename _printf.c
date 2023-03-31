#include <unistd.h>
#include <stdarg.h>
#include "main.h"
#include <stdio.h>

/**
  * _printf - prints out the number of values printed out.
  * @format: Holds the string value.
  * @...: holds the side arguments.
  * Return: number of values printed
  */

int _printf(const char *format, ...)
{
	int i = 0;
	char *x;
	int va;
	int p = 0;
	va_list list;
	int (*z)(va_list);

	/*making use of the variadic parameters, if any!*/

	va_start(list, format);


	/* breaks out of the code if no value is giving*/

	if (format == NULL)
		return(-1);

	/*prints out the arguments character by character and also counts them*/

	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			va = write(1, &format[i], 1);
			i++;
			p += va;
			continue;
		}
		if (format[i] == '%')
		{
			z = check_specifier(&format[i + 1]);
			if (z != NULL)
			{
				va = z(list);
				p += va;
				i += 2;
				continue;
			}
			else
				break;
		}
	}

	va_end(list);

	return(p);
}
