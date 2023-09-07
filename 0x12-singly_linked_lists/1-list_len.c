#include "lists.h"


/**
* list_len - computes the number of elements in a linked list
* @h: the linked list
*
* Return: the number of elements
*/
size_t list_len(const list_t *h)
{
	size_t num = h ? 1 : 0;
	list_t *p = h ? h->next : NULL;

	if (p)
	{
		while (p)
		{
			num++;
			p = p->next;
		}
	}
	return (num);
}
