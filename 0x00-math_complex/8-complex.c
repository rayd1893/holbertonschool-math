#include "holberton.h"
#include <math.h>

/**
 *  my_round - Round number
 * @number: Number to round
 * @decimal: Count of dot decimal
 *
 * Return: Number round
 */
double my_round(double number, int decimal)
{
	int ceros = pow(10, decimal);
	double r;

	r = (int) number * ceros;

	return (r / ceros);
}

/**
 * complex_from_mod_arg  - update the real and the imaginary parts
 * @m: modulus
 * @arg: argument
 * @c3: complex number
 *
 * Return: void
 */

void complex_from_mod_arg(double m, double arg, complex *c3)
{
	double d;
	double a;
	double b;

	d = tan(arg);
	a = sqrt(pow(m, 2) / (1 + pow(d, 2)));
	b = d * a;
	c3->re = my_round(a, 1);
	c3->im = my_round(b, 1);
}
