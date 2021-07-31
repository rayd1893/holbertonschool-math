#ifndef HOLBERTON_H
#define HOLBERTON_H
#define PI 3.14159265358979323846

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
double modulus(complex c);
double argument(complex c);

#endif
