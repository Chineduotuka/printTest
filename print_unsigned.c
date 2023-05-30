#include "main.h"

int print_unsigned_number(va_list args)
{
	unsigned long num = va_arg(args, unsigned long);
	int modulu_checker = 1;
	int count = 0;
	unsigned long num_copy;

	num_copy = num;

    while ((num_copy/modulu_checker) > 9)
    {
       modulu_checker *= 10;
    };

    while (modulu_checker != 0)
    {
       count += _putchar('0' +( num_copy / modulu_checker));
		num_copy %= modulu_checker;
		modulu_checker /= 10;
    }

	return (count);
}