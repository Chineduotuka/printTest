#include "main.h"

int printf_octal(va_list val)
{
	char *oct_array;
	unsigned int num = va_arg(val, unsigned int);
	int return_count = 0;
	int temp_count;
	int oct_array_size = BUFFER_SIZE;
	oct_array = (char *)malloc((oct_array_size +1) * sizeof(char));

	if(num < 0)
	{
		oct_array[0] = '-';
		return_count++;
		num *= -1;
	}
	
	while (num>0)
	{		
		if(return_count == oct_array_size)
		{
			oct_array_size += BUFFER_SIZE;
			oct_array =(int *)realloc(oct_array, oct_array_size *sizeof(int));
			if(oct_array == NULL)
			{
				free(oct_array);
				return (-1);
			}
		}

		int c = num % 8;
		oct_array[return_count] = '0' + c;
		num/=8;
		return_count++;		
	}

	temp_count = return_count - 1;

	oct_array[return_count] = '\0';
	while(temp_count >= 0 && oct_array[temp_count] != '\0')
	{
		_putchar(oct_array[temp_count]);
		temp_count--;
	}

	free(oct_array);
	return(return_count);
}