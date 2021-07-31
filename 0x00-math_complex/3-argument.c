#include "holberton.h"
#include <math.h>

/**
 * argument - Calculate argument of complex number
 * @c: Struct of complex number
 *
 * Return: Argument of complex number
 */
double argument(complex c)
{
	double a = c.re;
	double b = c.im;
	double arg;

	if (a == 0)
	{
		if (b == 0)
			arg = 0;
		if (b > 0)
			arg = PI / 2;
		if (b < 0)
			arg = (3 * PI) / 2;
	}
	else
	{
		arg = atan(b / a);

		if (a < 0)
		{
			if (b > 0)
				arg += PI;
			if (b < 0)
				arg -= PI;
		}
	}

	return (arg);
}
