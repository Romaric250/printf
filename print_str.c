#include "main.h"
#include <string.h>

/**
  * print_str - prints out a value of type string
  * @args: holds the argument we want to print out
  *
  * Return: number of values printed
  */

int print_str(va_list args)
{
	int a = 0;
	int p = 0;
	int i;
	char *ptr = va_arg(args, char *);

	if (ptr == NULL)
		ptr = "(null)";

	if (ptr)
	{
		p = strlen(ptr);

		for (i = 0; i < p; i++)
		{
			a++;
			write(1, &ptr[i], 1);

		}

		return (a);
	}

	return (0);
}
