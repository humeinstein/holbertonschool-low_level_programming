#include "holberton.h"



int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else
	{
		return ((n < '0') ? (-n) : (n));
	}
}
