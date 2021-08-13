#include "heron.h"

/**
 * push - Add new node
 * @head_ref: List
 * @new_data: New data to add in list
 *
 * Return: Nothing
 */
void push(t_cell **head_ref, double new_data)
{
	t_cell *new_node = malloc(sizeof(t_cell));

	if (new_node == NULL)
	{
		free(new_node);
		return;
	}

	new_node->elt  = new_data;

	new_node->next = (*head_ref);

	(*head_ref)    = new_node;
}

/**
 * heron - Sequence Heron
 * @p: Value static
 * @x0: Main value
 *
 * Return: List
 */
t_cell *heron(double p, double x0)
{
	t_cell *h;
	double error = 1 / 10000000;
	double x = x0;

	h = malloc(sizeof(t_cell));

	if (h == NULL)
		return (NULL);

	h->elt = x;

	while (fabs(p - (x * x)) > error)
	{
		if (x != x0)
			push(&h, x);

		x = 0.5 * (x + p / x);

	}

	return (h);
}
