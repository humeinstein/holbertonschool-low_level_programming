#include "holberton.h"
/**
 *
 *
 *
 *
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int x = 0;
	unsigned int sum = 0;
	unsigned int c = 0;
	unsigned int pow = 1;


	if (b == NULL)
	{
		return (0);
	}
	while (b[x] != '\0')
	{
		x++;
	}
	while (x-- != '\0')
	{
		if (b[x] == '0' || b[x] == '1')
		{
			c = b[x] - '0';
			sum = sum + (pow * c);
			pow *=  2;
		}
		else
			return (0);
	}
	return (sum);
}
