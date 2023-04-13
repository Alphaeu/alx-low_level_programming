#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array of a certain number
 *           of elements each of an inputted byte size.
 * @nmemb: The number of elements.
 * @size: The byte size of each array element.
 *
 * Return: If nmemb = 0, size = 0, or the function fails - NULL.
 *         Otherwise - a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
        int i = 0, l = 0;
        char *p;

        if (nmemb == 0 || size == 0)
                return (NULL);

        l = nmemb * size;
        p = malloc(l);

        if (p == NULL)
                return (NULL);

        while (i < l)
        {
                p[i] = 0;
                i++;
        }

        return (p);
}
