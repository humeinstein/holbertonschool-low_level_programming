#include "holberton.h"
/**
 *
 *
 *
 *
 *
 */
char *_strncat(char *dest, char *src, int n)
{
	int t = 0;
	int s = 0;

	while (dest[s] != '\0')
 	{
 		s++;
	}
 	while (src[t] != '\0' && t != n)
 	{
 		dest[s++] = src[t++];
		dest[s] = '\0';
 	}
	return (dest);
}
