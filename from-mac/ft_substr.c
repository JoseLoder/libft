#include <stdlib.h>
#include <string.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    if (!s)
    {
        return NULL;
    }

    size_t slen = strlen(s);
    if (start >= slen)
    {
        return strdup("");
    }

    if (start + len > slen)
    {
        len = slen - start;
    }

    char *sub = (char *)malloc(len + 1);
    if (!sub)
    {
        return NULL;
    }

    strncpy(sub, s + start, len);
    sub[len] = '\0';

    return sub;
}
