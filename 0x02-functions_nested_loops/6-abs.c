#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _abs - computes the absolute value of an interger.
 * @c: The number to be computed.
 * Return: Absolute value of integer or zero
 */

int _abs(int c)

{
	if (c < 0)
	{
	int abs_val;

	abs_val = c * -1;
	return (abs_val);
	}
	return (c);
}
