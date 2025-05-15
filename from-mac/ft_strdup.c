#include <stdlib.h>
#include <string.h>

char *ft_strdup(const char *s1)
{
    if (s1 == NULL)
    {
        return NULL;
    }

    size_t len = strlen(s1) + 1;
    char *new_string = (char *)malloc(len);

    if (new_string == NULL)
    {
        return NULL;
    }

    memcpy(new_string, s1, len);
    return new_string;
}
