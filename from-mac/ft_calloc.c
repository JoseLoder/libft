#include <stdio.h>

void *calloc(size_t count, size_t size)
{
    void *ptr;
    size_t total_size;
    unsigned char *p;
    size_t i;

    if (count == 0 || size == 0)
        return malloc(0);
    if (__builtin_mul_overflow(count, size, &total_size))
        return NULL;
    ptr = malloc(total_size);
    if (ptr == NULL)
        return NULL;
    p = (unsigned char *)ptr;
    for (i = 0; i < total_size; i++)
    {
        p[i] = 0;
    }
    return ptr;
}