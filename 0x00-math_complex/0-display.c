#include <stdio.h>
#include "holberton.h"

/**
 * _abs - Absolute value
 * @number: Number
 *
 * Return: Always positive
 */
int _abs(int number)
{
	if (number < 0)
		return (number * -1);

	else
		return (number);
}


/**
 * display_complex_number - Print real number and imaginary number
 * @c: Struct for complex number
 *
 * Return: Nothing
 */
void display_complex_number(complex c)
{
	if (c.re != 0)
	{
		printf("%d", c.re);

		if (c.im != 0)
		{
			if (c.im < 0)
				printf(" - ");

			else
				printf(" + ");

			if (_abs(c.im) == 1)
				printf("i");
			else
				printf("%di", _abs(c.im));
		}
	}

	else
	{
		if (c.im == 0)
			printf("0");

		else
		{
			printf("0");

			if (c.im < 0)
				printf(" - ");

			else
				printf(" + ");

			if (_abs(c.im) == 1)
				printf("i");
			else
				printf("%di", _abs(c.im));

		}
	}

	printf("\n");

}
