#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
  * struct func - struct for specifier to printer
  * @t: character type
  * @ptr: function poiiter
  */

typedef struct func
{
	char *t;
	int (*ptr)(va_list);
} func_t;

int _printf(const char *format, ...);
int (*check_specifier(const char*))(va_list);
int print_char(va_list args);
int print_str(va_list args);
int print_pc(va_list args);
int print_int(va_list args);
int _putchar(char c);

#endif
