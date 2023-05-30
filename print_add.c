#include "main.h"

int print_addr(va_list val)
{
	void *addr = va_arg(val, void *);
	char *str ;
	unsigned long num;
    int count = 0;

	if (addr == NULL)
	{
        str = "(Null)\n";
		_printf(str);
		return (1);
	}

	num = (unsigned long int)addr;

	int hex_count = my_func(num);

    count += hex_count;
	return (count);
}
