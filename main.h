#ifndef MY_PRINTF
#define MY_PRINTF

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>


struct convert
{
	char *id;
	int (*f)(va_list);
};
typedef struct convert type_checker;


int _putchar(char c);
int _printf(const char *format, ...);
void _vprintf(const char *format, va_list args);
int my_parser(const char *format,va_list args);
int char_printer(va_list);
int string_printer(va_list args);
int percent_printer(va_list);
int print_unsgined_number(unsigned int n);
int number_printer(va_list);
int int_printer(va_list);
int printf_bin(va_list val);
int printf_hex_upper(va_list val);
int printf_hex_lower(va_list val);
int printf_octal(va_list val);
#endif