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

/**
 * division - Divide two complex numbers
 * @c1: First complex number
 * @c2: Second complex number
 * @c3: Result of division of c1 and c2
 *
 * Return: Nothing
 */
void division(complex c1, complex c2, complex *c3)
{
	complex con;
	double div;


	con = conjugate(c2);

	div = (c2.re * c2.re) + (c2.im * c2.im);

	c3->re = ((c1.re * con.re) + (c1.im * con.im * -1)) / div;
	c3->im = ((c1.re * con.im) + (con.re * c1.im)) / div;
}
