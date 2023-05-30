#include "main.h"

int my_func(unsigned long address_lon_val)
{
	char *hex_array;
	int return_count = 0;
	int temp_count;
	char hex_mapper_upper[] = "0123456789ABCDEF";
	int hex_array_size = BUFFER_SIZE;
	hex_array = (char *)malloc((hex_array_size +1) * sizeof(char));
	
	while (address_lon_val>0)
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

		int c = address_lon_val % 16;
		hex_array[return_count] = hex_mapper_upper[c];
		address_lon_val/=16;
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