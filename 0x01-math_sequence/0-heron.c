#include "heron.h"

void append(t_cell **head_ref, double new_data)
{
	/* 1. allocate node */
	t_cell *new_node = malloc(sizeof(t_cell));

        t_cell *last = *head_ref;  /* used in step 5*/

	if (new_node == NULL)
	{
		free(new_node);
		return;
	}

	/* 2. put in the data  */
	new_node->elt  = new_data;

	/* 3. This new node is going to be the last node, so make next
	   of it as NULL*/
	new_node->next = NULL;

	/* 4. If the Linked List is empty, then make the new node as head */
	if (*head_ref == NULL)
	{
		*head_ref = new_node;
		return;
	}

	/* 5. Else traverse till the last node */
	while (last->next != NULL)
		last = last->next;

	/* 6. Change the next of last node */
	last->next = new_node;

	return;
}

void push(t_cell **head_ref, double new_data)
{
	/* 1. allocate node */
	t_cell *new_node = malloc(sizeof(t_cell));

	if (new_node == NULL)
	{
		free(new_node);
		return;
	}

	/* 2. put in the data  */
	new_node->elt  = new_data;

	/* 3. Make next of new node as head */
	new_node->next = (*head_ref);

	/* 4. move the head to point to the new node */
	(*head_ref)    = new_node;
}

t_cell *heron(double p, double x0)
{
	t_cell *h;
	double error = 1/10000000;
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
