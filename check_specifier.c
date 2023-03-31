#include "main.h"

/**
  * check_specifier - checks specifier and then calls the right function
  * @format: specifier type
  *
  * Return: pointer to a function
  */

int (*check_specifier(const char *format))(va_list)
{
	func_t spec_array[5] = {
		{"c", print_char},
		{"s", print_str},
		{"d", print_int},
		{"i", print_int},
		{NULL, NULL}
	};
	int i;

	for (i = 0; spec_array[i].t != NULL; i++)
	{
		if (*(spec_array[i].t) == *format)
			return (spec_array[i].ptr);
	}

	return (NULL);
}
