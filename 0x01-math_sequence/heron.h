#ifndef HERON_H
#define HERON_H

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/**
 * struct cell - Struct for sequence heron
 * @elt: Number
 * @next: struct type cell
 *
 * Description: List linked from cell
 */
typedef struct cell
{
	double elt;
	struct cell *next;
} t_cell;

t_cell *heron(double p, double x0);

#endif
