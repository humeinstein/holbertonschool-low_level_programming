#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - function that allocates memory using malloc
 * @b: number of bytes to allocate
 * Return: pointer to allocated memory
 *
 */
void *malloc_checked(unsigned int b)
{
	void *d;

	d = malloc(b);
	if (d == NULL)
	{
	     	exit(98);
	}
	return (d);
}
