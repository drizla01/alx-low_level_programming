#include <stdio.h>
#include "lists.h"

size_t print_list(const list_t *h):
{
	size_t num = 0;
	list_t *p = h ? h->next : NULL;

	if (h)
	{
		printf("[%d] %s\n", h->len : 0, h->str : "(nil)");
		num++;
	}
	if (p)
	{
		while (p)
		{
		printf("[%d] %s\n", p->str ? p->len : 0, p->str ? p->str : "(nil)");
		num++;
		p = p->next;
		}
	}
	return (num)
}
