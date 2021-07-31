#include <stdio.h>
#include "holberton.h"
/**
 * is_double - Evaluate if number is double
 * @number: number to evaluate
 *
 * Return: 0 is not double and 1 is double
 */
int is_double(double number)
{
	int value = number;

	if (value == number)
	{
		return (0);
	}

	return (1);
}

/**
 * _abs - Absolute value
 * @number: Number
 *
 * Return: Always positive
 */
double _abs(double number)
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

	if (c.re == 0 && c.im == 0)
		printf("0");
	else
	{
		if (is_double(c.re))
			printf("%.1f", c.re);
		else
			printf("%.0f", c.re);

		if (c.im != 0)
		{
			if (c.im < 0)
				printf(" - ");
			else
				printf(" + ");
			if (_abs(c.im) == 1)
				printf("i");
			else
			{
				if (is_double(c.im))
					printf("%.1fi", _abs(c.im));
				else
					printf("%.0fi", _abs(c.im));
			}
		}
	}

	printf("\n");

}
