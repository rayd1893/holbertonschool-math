#include "holberton.h"

/**
 * multiplication - Multiply two complex numbers
 * @c1: First complex number
 * @c2: Second complex number
 * @c3: Result of multiplication of c1 and c2
 *
 * Return: Nothing
 */
void multiplication(complex c1, complex c2, complex *c3)
{
	c3->re = (c1.re * c2.re) + (c1.im * c2.im * -1);
	c3->im = (c1.re * c2.im) + (c2.re * c1.im);
}
