#include <string.h>

size_t ft_strdigitcpy(char *dst, const char *src)
{
    size_t i;
    size_t j;
    size_t k;

    i = 0;
    j = 0;
    k = 0;
    while (src[i])
    {
        if (ft_isdigit(src[i]) || (src[i] == '-' && j == 0))
        {
            j++;
        }
        else if (j > 0)
        {
            return ((size_t)ft_strlcpy(dst, &src[k], j + 1));
        }
        i++;
        k = i - j;
    }
    return ((size_t)ft_strlcpy(dst, &src[k], i));
}