#include "holberton.h"

/**
 * substraction - Substraction of two complex numbers
 * @c1: First complex number
 * @c2: Second complex number
 * @c3: Result of substraction
 *
 * Return: Nothing
 */
void substraction(complex c1, complex c2, complex *c3)
{
	c3->re = c1.re - c2.re;
	c3->im = c1.im - c2.im;
}
