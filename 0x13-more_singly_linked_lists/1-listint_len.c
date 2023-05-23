#include "lists.h"
size_t listint_len(const listint_t *h)
{
    size_t countt = 0;

    while (h)
    {
        countt++;
        h = h->next;
    }

    return (countt);
}
