#include <string.h>
char *strreverse(char *str)
{
    size_t i;
    size_t j;
    size_t len;
    char c;

    len = ft_strlen(str);
    if (len <= 0)
    {
        return (str);
    }
    i = 0;
    j = len - 1;

    while (i < j)
    {
        c = str[i];
        str[i] = str[j];
        str[j] = c;
        i++;
        j--;
    }
    return str;
}