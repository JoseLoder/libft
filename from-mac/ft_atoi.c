#include <stdio.h>
#include <string.h>

int ft_isdigit(int digit)
{
    if (digit >= '0' && digit <= '9')
        return (1);
    else
        return (0);
}

int ft_atoi(const char *str)
{
    int result = 0;
    int sign = 1;
    int i = 0;
    int j = 0;

    // Handle leading whitespace
    while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
           str[i] == '\r' || str[i] == '\v' || str[i] == '\f')
    {
        i++;
    }

    while (str[i])
    {
        if (ft_isdigit(str[i]) || (str[i] == '-' && j == 0))
        {
            if (str[i] == '-')
            {
                sign = -1;
            }
            else
            {
                if (result > (2147483647 / 10) || (result == (2147483647 / 10) && (str[i] - '0') > 7))
                {
                    return (sign == 1) ? 2147483647 : -2147483648;
                }
                result = result * 10 + (str[i] - '0');
            }
            j++;
        }
        else if (j > 0)
        {
            return result * sign;
        }
        i++;
    }
    return result * sign;
}

int main(void)
{
    char buffer[10];
    size_t result;

    // Example 1
    const char *str1 = "abc123def456";

    if (result)
        printf("Example 1: First sequence of digits starts at: %d\n", ft_atoi(str1));
    else
        printf("Example 1: No digits found in the string.\n");

    // Example 2
    const char *str2 = "xyz789uvw";

    if (result)
        printf("Example 2: First sequence of digits starts at: %d\n", ft_atoi(str2));
    else
        printf("Example 2: No digits found in the string.\n");

    // Example 3
    const char *str3 = "no_digits_here";

    if (result)
        printf("Example 3: First sequence of digits starts at: %d\n", ft_atoi(str3));
    else
        printf("Example 3: No digits found in the string.\n");

    // Example 4
    const char *str4 = "xyz-789";

    if (result)
    {
        printf("Example 2: First sequence of digits starts at: %d\n", ft_atoi(str4));
    }
    else
        printf("Example 2: No digits found in the string.\n");

    return (0);
}