#include <stdio.h>
#include "holberton.h"

/**
 * display_complex_number - Print real number and imaginary number
 * @c: Struct for complex number
 *
 * Return: Nothing
 */
void display_complex_number(complex c)
{
	if (c.im == 0)
		printf("%d\n", c.re);

	else if (c.re == 0)
		printf("%di\n", c.im);

	else
		printf("%d + %di\n", c.re, c.im);
}
