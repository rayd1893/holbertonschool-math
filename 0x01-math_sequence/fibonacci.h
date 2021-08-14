#ifndef FIBO_H
#define FIBO_H

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/**
 * struct fibo - Struct for sequence Fibonacci
 * @elt: Number
 * @next: struct type fibo
 *
 * Description: List linked from fibo
 */
typedef struct fibo
{
	int elt;
	struct fibo *next;
} t_cell;

t_cell *Fibonnaci();
double gold_number(t_cell *head);

#endif
