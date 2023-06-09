#include "main.h"

int printf_hex_lower(va_list val)
{
	char *hex_array;
	unsigned long num = va_arg(val, unsigned long);
	int return_count = 0;
	int temp_count;
	char hex_mapper_lower[] = "0123456789abcdef";
	int hex_array_size = BUFFER_SIZE;
	hex_array = (char *)malloc((hex_array_size +1) * sizeof(char));

	if(num < 0)
	{
		hex_array[0] = '-';
		return_count++;
		num *= -1;
	}
	
	while (num>0)
	{		
		if(return_count == hex_array_size)
		{
			hex_array_size += BUFFER_SIZE;
			hex_array =(int *)realloc(hex_array, hex_array_size *sizeof(int));
			if(hex_array == NULL)
			{
				free(hex_array);
				return (-1);
			}
		}

		int c = num % 16;
		hex_array[return_count] = hex_mapper_lower[c];
		num/=16;
		return_count++;		
	}

	temp_count = return_count - 1;

	hex_array[return_count] = '\0';
	while(temp_count >= 0 && hex_array[temp_count] != '\0')
	{
		_putchar(hex_array[temp_count]);
		temp_count--;
	}

	free(hex_array);
	return(return_count);
}