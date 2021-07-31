#ifndef HOLBERTON_H
#define HOLBERTON_H

/**
 * struct complex - Struct for number complex
 * @re: Real number
 * @im: Imaginary number
 *
 * Description: Is a struct for define number complex
 */
typedef struct complex
{
	int re;
	int im;
} complex;

void display_complex_number(complex c);
complex conjugate(complex c);

#endif
