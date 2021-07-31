#include <math.h>
#include "holberton.h"

/**
 * modulus - Calculate modulus of complex number.
 * @c: Struct of complex number.
 *
 * Return: Modulus of complex number.
 */

double modulus(complex c)
{
	int a, b;

	a = c.re;
	b = c.im;

	return (sqrt((a * a) + (b * b)));
}
