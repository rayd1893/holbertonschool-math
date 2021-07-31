#include "holberton.h"

/**
 * conjugate - Conjugate complex number
 * @c: Struct of complex number
 *
 * Return: Complex number conjugate;
 */
complex conjugate(complex c)
{

	c.im = c.im * -1;

	return (c);
}
