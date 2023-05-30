#include "main.h"
#include <limits.h>
#include <stdio.h>


int main(void)
{
	int len;
	int len2;
	unsigned int ui;
	void *addr;

	_printf("%R\n", "HELLO7");
	_printf("%R\n", "");
	_printf("%R\n", NULL);
	_printf("%r\n", "best");
	_printf("%b\n", 98);
	_printf("%o\n", 205);
	_printf("%o\n", 100000);
	printf("%o\n", 205);
	printf("%o\n", 100000);
	_printf("%X\n", 205);
	_printf("%x\n", 100000);
	printf("%X\n", 205);
	printf("%x\n", 100000);
	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	ui = (unsigned int)INT_MAX + 1024;
	addr = (void *)0x7ffe637541f0;
	int *x = 42;
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
	_printf("Unsigned:[%u]\n", -800);
	printf("Unsigned:[%u]\n", -800);
	_printf("Unsigned octal:[%o]\n", ui);
	printf("Unsigned octal:[%o]\n", ui);
	_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	_printf("Address:[%p]\n", addr);
	printf("Address:[%p]\n", addr);
	_printf("Address:[%p]\n", &x);
	printf("Address:[%p]\n", &x);

	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
	return (0);
}